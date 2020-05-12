#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a1, b1, a2, b2;
    int player1, player2;

    cin >> a1 >> b1 >> a2 >> b2;
    player1 = a1 + b1 + a2 + b2;

    cin >> a1 >> b1 >> a2 >> b2;
    player2 = a1 + b1 + a2 + b2;

    if (player1 > player2)
        cout << "Gunnar";
    if (player1 == player2)
        cout << "Tie";
    if (player1 < player2)
        cout << "Emma";
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}