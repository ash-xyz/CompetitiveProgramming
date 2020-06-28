#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_set<string> set;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        set.insert(s);
    }
    cout << set.size() << endl;
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