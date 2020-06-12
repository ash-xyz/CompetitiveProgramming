#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    int num = 0;
    int n = 2;
    while (n * n <= x)
    {
        if (x % n == 0)
        {
            x /= n;
            num++;
        }
        else
            n++;
    }
    cout << num + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}