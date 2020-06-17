#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> hikeDays(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> hikeDays[i];
    }
    int maxi = max(hikeDays[0], hikeDays[2]);
    int day = 1;
    for (int i = 1; i < n - 2; i++)
    {
        int curMax = max(hikeDays[i], hikeDays[i + 2]);
        if (curMax < maxi)
        {
            day = i + 1;
            maxi = curMax;
        }
    }
    cout << day << " " << maxi;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}