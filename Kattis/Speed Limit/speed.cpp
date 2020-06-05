#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    while (cin >> n && n != -1)
    {
        int p = 0;
        int miles = 0;
        while (n--)
        {
            int speed, time;
            cin >> speed >> time;
            miles += speed * (time - p);
            p = time;
        }
        cout << miles << " miles" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}