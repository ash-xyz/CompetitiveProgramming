#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<long long> dp;
    long long n;
    cin >> n;
    long long N = sqrt(n) + 2;

    for(long long i = 1; i<N; i++)
    {
        if(n%i == 0)
        {
            dp.push_back(i);
            dp.push_back(n/i);
        }
    }
    sort(dp.begin(),dp.end());

    dp.resize(distance(dp.begin(),unique(dp.begin(),dp.end())));

    for(long long i = 0; i< dp.size(); i++)
    {
        cout << dp[i] - 1 << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}