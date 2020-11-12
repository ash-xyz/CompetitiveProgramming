#include <bits/stdc++.h>
using namespace std;

int pondSize(vector<vector<int>> pond)
{
    int dy[4]{-1, 1, 0, 0};
    int dx[4]{0, 0, -1, 1};
    queue<pair<int, int>> q;
    int r = pond.size();
    int c = pond[0].size();
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (pond[i][j] == 0)
            {
                q.push({i, j});
                pond[i][j] = -1;
                count++;
                while (!q.empty())
                {
                    int first = q.front().first;
                    int second = q.front().second;
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int y = first + dy[i];
                        int x = second + dx[i];
                        if (y < 0 || y >= r || x < 0 || x >= c || pond[y][x] != 0)
                            continue;
                        q.push({y, x});
                        pond[y][x] = -1;
                    }
                }
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> pond = {{0, 1, 0, 1, 2},
                                {1, 0, 0, 1, 2},
                                {1, 1, 0, 1, 2},
                                {0, 1, 1, 1, 0}};
    cout << pondSize(pond) << endl;
}