#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    unordered_set<string> set;
    bool duplicate = false;
    while (cin >> s)
    {
        if (!set.count(s))
            set.insert(s);
        else
        {
            duplicate = true;
            break;
        }
    }
    duplicate ? cout << "no" : cout << "yes";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}