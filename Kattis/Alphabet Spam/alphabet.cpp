#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int whiteSpace, lowerCase, upperCase;
    whiteSpace = lowerCase = upperCase = 0;
    for (char c : s)
    {
        if (c == '_')
            whiteSpace++;
        if (islower(c))
            lowerCase++;
        if (isupper(c))
            upperCase++;
    }
    int n = s.size();
    cout << fixed;
    cout.precision(9);
    cout << (double)whiteSpace / n << endl;
    cout << (double)lowerCase / n << endl;
    cout << (double)upperCase / n << endl;
    cout << 1 - (double)whiteSpace / n - (double)lowerCase / n - (double)upperCase / n << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}