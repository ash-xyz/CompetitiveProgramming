#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int H, M;
    cin >> H >> M;
    int diffM = M - 45;
    if (diffM < 0)
    {
        M = 60 + diffM;
        int diffH = H - 1;
        if (diffH < 0)
            H = 23;
        else
            H--;
    }
    else
        M = diffM;
    cout << H << " " << M << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}