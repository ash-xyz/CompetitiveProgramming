#include <bits/stdc++.h>
using namespace std;

vector<int> boardLength(int N, int X, int Y)
{
    vector<int> ans;
    for (int i = 0; i <= N; i++)
    {
        ans.push_back((N - i) * X + i * Y);
    }
    return ans;
}

int main()
{
    vector<int> a = boardLength(6, 3, 2);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}