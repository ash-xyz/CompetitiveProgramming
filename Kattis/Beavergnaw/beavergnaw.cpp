#include <bits/stdc++.h>
using namespace std;

void solve(double D, double V)
{
    double d = pow(D * D * D - 6 * V / M_PI, 1 / 3.0);
    cout << fixed;
    cout.precision(9);
    cout << d << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double D, V;
    while (cin >> D >> V && D != 0 && V != 0)
    {
        solve(D, V);
    }
}