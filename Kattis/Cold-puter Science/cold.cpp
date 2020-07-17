#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int numBelowZero = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp < 0)
            numBelowZero++;
    }
    cout << numBelowZero << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}