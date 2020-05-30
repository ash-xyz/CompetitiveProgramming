#include <bits/stdc++.h>
using namespace std;

void solve()
{
    map<char, int> dominant;
    dominant['A'] = 11;
    dominant['K'] = 4;
    dominant['Q'] = 3;
    dominant['J'] = 20;
    dominant['T'] = 10;
    dominant['9'] = 14;
    dominant['8'] = 0;
    dominant['7'] = 0;

    map<char, int> notDominant;
    notDominant['A'] = 11;
    notDominant['K'] = 4;
    notDominant['Q'] = 3;
    notDominant['J'] = 2;
    notDominant['T'] = 10;
    notDominant['9'] = 0;
    notDominant['8'] = 0;
    notDominant['7'] = 0;

    int N;
    char B;
    cin >> N >> B;
    int sum = 0;
    for (int i = 0; i < N * 4; i++)
    {
        char num, suit;
        cin >> num >> suit;
        sum += suit == B ? dominant[num] : notDominant[num];
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}