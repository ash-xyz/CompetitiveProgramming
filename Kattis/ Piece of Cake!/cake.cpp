#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, v;
    cin >> n >> h >> v;
    cout << 4 * max(n - v, v) * max(n - h, h) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}