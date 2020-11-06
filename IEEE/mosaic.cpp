#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, C_b, C_p;
    cin >> N >> C_b >> C_p;
    int B = 0, P = 0;
    for (int i = 0; i < N; i++)
    {
        int curB, curP;
        cin >> curB >> curP;
        B += curB;
        P += curP;
    }
    int cost = ((B / 10) * C_b) + C_b * (B % 10 == 0 ? 0 : 1) + ((P / 10) * C_p) + C_p * (P % 10 == 0 ? 0 : 1);
    cout << cost << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}