#include <bits/stdc++.h>
using namespace std;

void solve(long long a, long long b, long long c, long long d)
{
    long long deterimenant = a * d - b * c;
    cout << d / deterimenant << " " << -b / deterimenant << endl;
    cout << -c / deterimenant << " " << a / deterimenant << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, c, d;
    int i = 1;
    while (cin >> a >> b >> c >> d)
    {
        cout << "Case " << i << ":" << endl;
        ;
        solve(a, b, c, d);
        ++i;
    }
}