#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    double q, y;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> q >> y;
        sum += q * y;
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}