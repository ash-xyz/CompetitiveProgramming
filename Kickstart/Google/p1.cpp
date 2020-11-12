#include <bits/stdc++.h>
using namespace std;
void fizzBuzz(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << " ";
        else if (i % 3 == 0)
            cout << "Fizz" << " ";
        else if (i % 5 == 0)
            cout << "Buzz" << " ";
        else
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    fizzBuzz(6);
}