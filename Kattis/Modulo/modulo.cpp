#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unordered_set<int> hashUhMapUh;
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        hashUhMapUh.insert(a % 42);
    }
    cout << hashUhMapUh.size() << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}