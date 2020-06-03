#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int wordBegining = n / 3;
    string realMessage;
    for (int i = 0; i < n / 3; i++)
    {
        if (s[i] == s[i + n / 3])
        {
            realMessage.push_back(s[i]);
        }
        else if (s[i] == s[i + 2 * n / 3])
        {
            realMessage.push_back(s[i]);
        }
        else
        {
            realMessage.push_back(s[i + n / 3]);
        }
    }
    cout << realMessage << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}