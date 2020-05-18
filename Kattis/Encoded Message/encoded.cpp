#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int squareLength = sqrt(n);

    string solution;
    int cur = squareLength - 1;
    for (int i = 0; i < n; i++)
    {
        solution.push_back(s[cur]);
        cur += squareLength;
        if (cur >= n)
        {
            cur %= n + 1;
        }
    }
    cout << solution << endl;
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