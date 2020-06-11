#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double A, N;
    cin >> A >> N;
    double area = (N * N) / (4.0 * M_PI);
    A < area ? cout << "Diablo is happy!" : cout << "Need more materials!";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}