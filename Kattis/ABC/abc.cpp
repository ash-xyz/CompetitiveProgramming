#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> dp(3, 0);
    cin >> dp[0] >> dp[1] >> dp[2];
    sort(dp.begin(), dp.end());
    string s;
    cin >> s;
    if (s == "ABC")
    {
        cout << dp[0] << " " << dp[1] << " " << dp[2] << endl;
    }
    else if (s == "ACB")
    {
        cout << dp[0] << " " << dp[2] << " " << dp[1] << endl;
    }
    else if (s == "BAC")
    {
        cout << dp[1] << " " << dp[0] << " " << dp[2] << endl;
    }
    else if (s == "BCA")
    {
        cout << dp[1] << " " << dp[2] << " " << dp[0] << endl;
    }
    else if (s == "CAB")
    {
        cout << dp[2] << " " << dp[0] << " " << dp[1] << endl;
    }
    else
    {
        cout << dp[2] << " " << dp[1] << " " << dp[0] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}