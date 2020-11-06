#include <bits/stdc++.h>
using namespace std;

double getHingeLoss(double &x1, double &x2, int &y, double &w1, double &w2, double &b)
{
    double loss = 0;
    if (y == 1)
    {
        loss = 1 - (w1 * x1 + w2 * x2 + b);
    }
    else
    {
        loss = 1 + (w1 * x1 + w2 * x2 + b);
    }
    if (loss < 0)
        loss = 0;
    return loss;
}
double getSVMCost(vector<double> &x1, vector<double> &x2, vector<int> &y,
                  double w1, double w2, double b,
                  double &dw1, double &dw2, double &db)
{
    int n = static_cast<int>(y.size());
    // hinge loss
    double cost = 0;
    dw1 = 0;
    dw2 = 0;
    db = 0;
    for (int i = 0; i < n; i++)
    {
        double loss = getHingeLoss(x1[i], x2[i], y[i], w1, w2, b);
        cost += loss;
        // when loss = 0, all derivatives are 0
        if (loss > 0)
        {
            dw1 += (-x1[i] * y[i]);
            dw2 += (-x2[i] * y[i]);
            db += (-y[i]);
        }
    }
    cost /= n;
    dw1 /= n;
    dw2 /= n;
    db /= n;
    return cost;
}
vector<double> trainSVM(vector<double> &x1, vector<double> &x2, vector<int> &y)
{
    double lrate = 0.0005;
    double threshold = 0.001;
    double w1 = 1;
    double w2 = 1;
    double b = 0;
    double dw1 = 0;
    double dw2 = 0;
    double db = 0;
    int iter = 0;
    for(int i = 0; i<1000;i++)
    {
        double cost = getSVMCost(x1, x2, y, w1, w2, b, dw1, dw2, db);
        if (iter % 1000 == 0)
        {
            //cout << "Iter : " << iter << " cost = " << cost << " dw1 = " << dw1 << " dw2 = " << dw2 << " db = " << db << endl;
        }
        iter++;
        if (abs(dw1) < threshold && abs(dw2) < threshold && abs(db) < threshold)
        {
            //cout << "y = " << w1 << " * x1 + " << w2 << " * x2 + " << b << endl;
            break;
        }
        w1 -= lrate * dw1;
        w2 -= lrate * dw2;
        b -= lrate * db;
    }
    return {w1, w2, b};
}
void solve()
{
    int N;
    cin >> N;
    vector<double> x1(N, 0), x2(N, 0);
    vector<int> y(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> x1[i] >> x2[i] >> y[i];
    }
    vector<double> weights = trainSVM(x1, x2, y);

    int errorRate = 0;
    for (int i = 0; i < N; i++)
    {
        double classification = weights[0] * x1[i] + weights[1] * x2[i] + weights[2];
        if ((classification > 0 && y[i] == -1) || (classification < 0 && y[i] == 1))
        {
            errorRate++;
        }
    }
    errorRate > 0.02 * N ? cout << "NO" : cout << "YES";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }
}