#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int t;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        total += t < 0 ? 1 : 0;
    }
    cout << total << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}