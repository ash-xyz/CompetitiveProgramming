#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string answer;
    string guess;
    cin >> answer >> guess;
    unordered_set<char> set;
    for (char c : answer)
    {
        set.insert(c);
    }
    int numOfGuess = 0;
    for (char c : guess)
    {
        if (numOfGuess == 10)
        {
            break;
        }
        if (set.find(c) != set.end())
        {
            set.erase(c);
            if (set.empty())
            {
                cout << "WIN" << endl;
                return;
            }
        }
        else
            numOfGuess++;
    }
    cout << "LOSE" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}