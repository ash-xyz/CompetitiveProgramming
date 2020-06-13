#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int year = 2018;
    int month = 3;
    while (year < n)
    {
        month += 26;
        while (month >= 12)
        {
            month -= 12;
            year += 1;
        }
    }
    year == n ? cout << "yes" : cout << "no";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}