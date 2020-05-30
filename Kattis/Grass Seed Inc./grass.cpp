#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    double C;
    cin >> C >> N;
    double sum;
    for (int i = 0; i < N; i++)
    {
        double w, l;
        cin >> w >> l;
        sum += w * l;
    }
    cout.precision(7);
    cout << fixed;
    cout << sum * C << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}