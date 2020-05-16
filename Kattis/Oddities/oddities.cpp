#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    n % 2 == 0 ? cout << n << " is even" : cout << n << " is odd";
    cout << endl;
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