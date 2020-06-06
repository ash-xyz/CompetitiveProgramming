#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned n;
    int b;
    cin >> n >> b >> n;
    int sum = 0;
    while (n > 0)
    {
        sum += (n % b) * (n % b);
        n /= b;
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "" << i << " ";
        solve();
    }
}