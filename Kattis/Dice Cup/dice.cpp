//This is stolen from William Lin: https://www.youtube.com/channel/UCKuDLsO0Wwef53qdHPjbU2Q
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a + 1 << endl;
    }
    else
    {
        for (int i = min(a, b); i < min(a, b) + abs(a - b) + 1; i++)
        {
            cout << i + 1 << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}