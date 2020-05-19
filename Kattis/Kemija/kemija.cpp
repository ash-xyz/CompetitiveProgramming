#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int n = s.size();
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(s[i]);
        if (vowels.count(s[i]))
            i += 2;
    }
    cout << ans << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}