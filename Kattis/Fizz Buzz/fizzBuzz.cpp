#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int X, Y, N;
    cin >> X >> Y >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % X == 0 && i % Y == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % X == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % Y == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}