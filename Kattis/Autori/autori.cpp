#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    string output;
    output.push_back(s[0]);
    for (int i = 1; i < s[i]; i++)
    {
        if (s[i] == '-')
        {
            output.push_back(s[i + 1]);
        }
    }
    cout << output;
}