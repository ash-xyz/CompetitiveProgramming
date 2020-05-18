#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h, v;
    cin >> h >> v;
    cout << (int)ceil((double)(h / sin(v * M_PI / 180.0))) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}