#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long N;
    cin >> N;
    vector<pair<long long, long long>> dp;

    for (int i = 2; i <= sqrt(N); i++)
    {
        int temp = 0;
        while (N % i == 0)
        {
            temp++;
            N /= i;
        }
        if (temp != 0)
        {
            dp.push_back({i, temp});
        }
    }
    if (N != 1)
    {
        dp.push_back({N, 1});
    }
    long long a, b;
    a = N;
    b = 0;
    for (int i = 0; i < dp.size(); i++)
    {
        if (b < dp[i].second)
        {
            a = dp[i].first;
            b = dp[i].second;
        }
    }
    cout << a << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}