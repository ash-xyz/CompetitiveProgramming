#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << 0 << " " << 1;
        return;
    }
    vector<int> fibSequence(n, 0);
    fibSequence[0] = fibSequence[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibSequence[i] = fibSequence[i - 1] + fibSequence[i - 2];
    }
    cout << fibSequence[n - 2] << " " << fibSequence[n - 1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}