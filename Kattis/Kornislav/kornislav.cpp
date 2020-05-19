#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> dp(4, 0);
    for (int i = 0; i < 4; i++)
    {
        cin >> dp[i];
    }
    sort(dp.begin(), dp.end());
    cout << dp[0] * dp[2] << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}