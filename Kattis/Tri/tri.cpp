#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == (b + c))
        cout << a << "=" << b << "+" << c << endl;
    else if (a == (b - c))
        cout << a << "=" << b << "-" << c << endl;
    else if (a == (b * c))
        cout << a << "=" << b << "*" << c << endl;
    else if ((a + b) == c)
        cout << a << "+" << b << "=" << c << endl;
    else if ((a - c) == c)
        cout << a << "-" << b << "=" << c << endl;
    else if ((a * b) == c)
        cout << a << "*" << b << "=" << c << endl;
    else if ((a / b) == c && (a % b) == 0)
        cout << a << "/" << b << "=" << c << endl;
    else if (a == (b / c) && (b % c) == 0)
        cout << a << "=" << b << "/" << c << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}