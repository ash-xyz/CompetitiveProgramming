#include <bits/stdc++.h>
using namespace std;
void A(vector<int> &a)
{
    swap(a[0], a[1]);
}
void B(vector<int> &a)
{
    swap(a[1], a[2]);
}
void C(vector<int> &a)
{
    swap(a[0], a[2]);
}
void solve()
{
    string s;
    cin >> s;
    vector<int> a = {1, 2, 3};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            A(a);
        }
        if (s[i] == 'B')
        {
            B(a);
        }
        if (s[i] == 'C')
        {
            C(a);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 1)
        {
            cout << i + 1 << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}