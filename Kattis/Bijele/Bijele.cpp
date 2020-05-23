#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int propper[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++)
    {
        int temp;
        cin >> temp;
        cout << propper[i] - temp << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}