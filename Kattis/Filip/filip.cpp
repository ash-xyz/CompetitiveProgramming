//This is stolen from William Lin: https://www.youtube.com/channel/UCKuDLsO0Wwef53qdHPjbU2Q
#include <bits/stdc++.h>
using namespace std;
int reverse(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        int last = num % 10;
        reverse = (reverse * 10) + last;
        num /= 10;
    }
    return reverse;
}
void solve()
{
    int num1;
    int num2;
    cin >> num1 >> num2;
    num1 = reverse(num1);
    num2 = reverse(num2);

    cout << max(num1, num2) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}