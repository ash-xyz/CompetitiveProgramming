#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    double total = 0.0;
    cin >> n;
    int hitsThatCount = n;
    for (int i = 0; i < n; i++)
    {
        int bases;
        cin >> bases;
        if (bases == -1)
        {
            hitsThatCount--;
        }
        else
        {
            total += bases;
        }
    }
    cout << total / hitsThatCount;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}