#include <bits/stdc++.h>
using namespace std;
class Modular
{
    long long s, t, q;

    long long mod(long long x, long long n)
    {
        return x % n < 0 ? x % n + n : x % n;
    }

public:
    long long add(long long x, long long y, long long n)
    {
        return x + y >= n ? x + y - n : x + y;
    }
    long long subtract(long long x, long long y, long long n)
    {
        return x < y ? x + n - y : x - y;
    }
    long long multiply(long long x, long long y, long long n)
    {
        long long remainder = 0;
        while (y)
        {
            if (y % 2 == 1)
            {
                remainder = add(remainder, x, n);
            }
            y /= 2;
            x = add(x, x, n);
        }
        return remainder;
    }
    void extendedEuclideanAlgorithim(long long x, long long y)
    {
        if (x == 0)
        {
            s = 0;
            t = 0;
            q = y;
        }
        if (y == 0)
        {
            s = 1;
            t = 1;
            q = x;
        }
        else
        {
            long long remainder = mod(x, y);
            long long q = (x - remainder) / y;
            extendedEuclideanAlgorithim(y, mod(x, y));
            long long temp = s;
            s = t;
            t = temp - q * t;
        }
    }
    long long divide(long long x, long long y, long long n)
    {
        q = 0;
        extendedEuclideanAlgorithim(y, n);
        if (y * s + n * t == 1)
        {
            s = mod(s, n);
            return multiply(x, s, n);
        }
        return -1;
    }
};
void solve(long long n, int t)
{
    if (t == 0)
        return;
    long long x, y;
    char operation;
    cin >> x >> operation >> y;
    Modular mod;
    switch (operation)
    {
    case '+':
        cout << mod.add(x, y, n) << endl;
        break;
    case '-':
        cout << mod.subtract(x, y, n) << endl;
        break;
    case '*':
        cout << mod.multiply(x, y, n) << endl;
        break;
    case '/':
        cout << mod.divide(x, y, n) << endl;
        break;
    default:
        break;
    }
    solve(n, --t);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    int t;
    while (cin >> n >> t && n && t)
    {
        solve(n, t);
    }
}