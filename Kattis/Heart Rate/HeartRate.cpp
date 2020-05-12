#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double b, p;
    cin >> b >> p;

    double BPM = 60.0 * (b / p);
    double var = 60.0 / p;
    cout << fixed;
    cout.precision(4);
    cout << BPM - var << " " << BPM << " " << BPM + var << endl;
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