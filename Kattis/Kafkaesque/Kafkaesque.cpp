#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int K;
    cin >> K;
    int prev = 0;
    int time = 0;
    for (int i = 0; i < K; i++)
    {
        int cur;
        cin >> cur;
        if (prev > cur)
            time++;
        prev = cur;
    }
    cout << time + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}