#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int days = 0;
    for(int i = 0; i< s.size(); i++)
    {
        if(i%3 == 0 && s[i]!='P')
            days++;
        if(i%3 == 1 && s[i]!='E')
            days++;
        if(i%3 == 2 && s[i]!='R')
            days++;
    }

    cout << days << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}