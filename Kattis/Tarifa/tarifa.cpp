#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int X;
    int N;
    cin >> X >> N;
    vector<int> usage(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> usage[i];
    }
    int total = 0;
    for (int i = 0; i < N; i++)
    {
        total += (X - usage[i]);
    }
    cout << total + X << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}