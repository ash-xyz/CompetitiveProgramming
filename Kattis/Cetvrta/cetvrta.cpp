#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < 3; i++)
    {
        int tempX, tempY;
        cin >> tempX >> tempY;
        x ^= tempX;
        y ^= tempY;
    }

    cout << x << " " << y << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}