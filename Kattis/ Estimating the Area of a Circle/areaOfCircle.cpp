#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double r, m, c;
    while (cin >> r >> m >> c && r != 0 && m != 0 && c != 0)
    {
        double area = M_PI * r * r;
        double approx = 4 * r * r * c / m;
        cout << fixed;
        cout.precision(6);
        cout << area << " " << approx << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}