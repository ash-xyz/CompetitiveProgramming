#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ans[] = {1, 2, 6, 4};
    int n;
    cin >> n;
    if (n >= 5)
        cout << 0 << endl;
    else
    {
        cout << ans[n - 1] << endl;
    }
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