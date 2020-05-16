#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<vector<int>> scores(5, vector<int>(4, 0));
    //Input
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> scores[i][j];
        }
    }
    //Find Max Number and their id
    int max = 0;
    int id = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max <= scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3])
        {
            max = scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3];
            id = i;
        }
    }
    cout << id + 1 << " " << max;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}