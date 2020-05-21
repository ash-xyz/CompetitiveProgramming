#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string output;
    output.push_back(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            output.push_back(s[i]);
        }
    }
    cout << output << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}