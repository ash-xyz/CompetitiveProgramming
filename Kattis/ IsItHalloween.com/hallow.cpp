#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int N;
    cin >> N;
    if (s == "OCT" && N == 31)
    {
        cout << "yup" << endl;
    }
    else if (s == "DEC" && N == 25)
        cout << "yup" << endl;
    else
        cout << "nope" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}