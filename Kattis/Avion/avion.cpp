#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string CIA = "FBI";
    vector<string> data;
    bool output = false;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        if (s.find(CIA) != -1)
        {
            cout << i + 1 << " ";
            output = true;
        }
    }
    output ? cout << endl : cout << "HE GOT AWAY!" << endl;
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}