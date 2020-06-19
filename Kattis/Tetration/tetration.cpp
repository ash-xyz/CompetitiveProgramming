#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double N;
    cin >> N;
    double ans = exp(log(N) / N);
    cout << fixed;
    cout.precision(6);
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}