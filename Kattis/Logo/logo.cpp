#include <bits/stdc++.h>
using namespace std;
int absoluteDistance(double x, double y)
{
    return round(sqrt(pow(x, 2) + pow(y, 2)));
}
void solve()
{
    int N;
    cin >> N;
    double x = 0, y = 0, angle = 0;
    for (int i = 0; i < N; i++)
    {
        string op;
        int num;
        cin >> op >> num;
        if (op == "fd")
        {
            x += num * sin(angle * (M_PI / 180));
            y += num * cos(angle * (M_PI / 180));
        }
        if (op == "lt")
        {
            angle += num;
        }
        if (op == "bk")
        {
            x -= num * sin(angle * (M_PI / 180));
            y -= num * cos(angle * (M_PI / 180));
        }
        if (op == "rt")
        {
            angle -= num;
        }
    }
    cout << absoluteDistance(x, y) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}