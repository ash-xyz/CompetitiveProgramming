#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, s, m, n;
    cout << fixed;
    cout.precision(2);
    while (true)
    {
        cin >> a >> b >> s >> m >> n;
        if (a + b + s + m + n == 0)
            break;
        int x = m * a;
        int y = n * b;
        double distance = sqrt((double)x * x + (double)y * y);
        double v = distance / s;

        if (x == 0)
            cout << 90 << " " << v << endl;
        else
            cout << atan((double)y / x) * (180.0 / 3.141592653589793238463) << " " << v << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}