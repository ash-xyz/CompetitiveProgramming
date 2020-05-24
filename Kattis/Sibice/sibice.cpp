#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, W, H;
    cin >> N >> W >> H;

    for (int i = 0; i < N; i++)
    {
        int matches;
        cin >> matches;
        if (W * W + H * H >= matches * matches)
        {
            cout << "DA" << endl;
        }
        else
            cout << "NE" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}