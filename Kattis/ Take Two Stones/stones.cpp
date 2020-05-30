#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    N % 2 == 0 ? cout << "Bob" : cout << "Alice";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}