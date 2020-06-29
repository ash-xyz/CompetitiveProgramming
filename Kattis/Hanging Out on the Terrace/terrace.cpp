#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int L, N;
    cin >> L >> N;
    int disallowed = 0;
    int currentTerrace = 0;
    for (int i = 0; i < N; i++)
    {
        string s;
        int num;
        cin >> s >> num;
        if (s == "enter")
        {
            if (currentTerrace + num > L)
            {
                disallowed++;
            }
            else
            {
                currentTerrace += num;
            }
        }
        else
        {
            currentTerrace -= num;
        }
    }
    cout << disallowed << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}