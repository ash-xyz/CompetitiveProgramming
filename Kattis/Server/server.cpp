#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, T;
    cin >> n >> T;
    int lengthOfTask;
    int numOfTasks = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> lengthOfTask;
        T -= lengthOfTask;
        if (T >= 0)
            numOfTasks++;
    }
    cout << numOfTasks << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}