#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int day = 1;
    int print = 1;
    while (print < n)
    {
        print *= 2;
        day += 1;
    }
    cout << day << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}