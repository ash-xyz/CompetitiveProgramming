#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    a > 0 && b > 0 && c > 0 && a + b + c >= n &&n >= 3 ? cout << "YES" : cout << "NO";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}