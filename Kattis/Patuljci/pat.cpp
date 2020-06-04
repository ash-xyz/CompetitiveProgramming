#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int sum = 0;
    vector<int> dwarves(9, 0);
    for (int i = 0; i < 9; i++)
    {
        cin >> dwarves[i];
        sum += dwarves[i];
    }
    int i, j;
    for (i = 0; i < 8; i++)
    {
        bool flag = false;
        for (j = i + 1; j < 9; j++)
        {
            if (sum - dwarves[i] - dwarves[j] == 100)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    for (int k = 0; k < 9; k++)
    {
        if (k == i || k == j)
            continue;
        cout << dwarves[k] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}