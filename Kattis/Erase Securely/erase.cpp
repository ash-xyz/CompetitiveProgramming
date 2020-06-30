#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    n %= 2;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if ((!(s1.at(i) == s2.at(i)) && !n) || ((s1.at(i) == s2.at(i)) && n))
        {
            cout << "Deletion failed" << endl;
            return;
        }
    }
    cout << "Deletion succeeded" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}