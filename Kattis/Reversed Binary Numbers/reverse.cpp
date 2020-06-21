#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, ans = 0;
    cin >> N;
    while (N)
    {
        ans = (ans << 1) | (N & 1);
        N >>= 1;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}