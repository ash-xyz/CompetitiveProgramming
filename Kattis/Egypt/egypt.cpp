#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c)
{
    vector<int> dp = {a,b,c};
    sort(dp.begin(),dp.end());
    pow(dp[0],2) + pow(dp[1],2) == pow(dp[2],2)?cout << "Right":cout << "Wrong";
    cout << endl;
}

int main()
{
    int a,b,c;
    while(cin >> a >> b >> c && a !=0 && b != 0 && c!=0)
    {
        solve(a,b,c);
    }
}