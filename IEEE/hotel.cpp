#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int M, N, K;
    cin >> M >> N >> K;
    vector<int> rooms(M, 0);
    for (int i = 0; i < M; i++)
    {
        cin >> rooms[i];
    }
    int ans = 0;
    for (int i = 0; i < K; i++)
    {
        for (int j = i + 1; j < M; j++)
        {
            if (rooms[j] >= rooms[i])
                swap(rooms[i], rooms[j]);
        }

        rooms[i] = N - rooms[i];
        ans += rooms[i];
    }
    for (int i = K; i < M; i++)
    {
        ans += (N-rooms[i]);
    }
    cout << "ans:" << ans << endl;
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