#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    n = n % 400 == 0 ? n / 400 : 1 + n / 400;
    cout << n << endl;
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