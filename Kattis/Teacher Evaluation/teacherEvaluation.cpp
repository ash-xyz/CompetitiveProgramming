#include <bits/stdc++.h>
using namespace std;
double Average(vector<double> nums)
{
    int n = nums.size();
    double result = 0.0;
    for (int i = 0; i < n; i++)
    {
        result += nums[i];
    }
    return result / n;
}
double Total(vector<double> nums)
{
    int total = 0;
    for (double n : nums)
    {
        total += n;
    }
    return total;
}
void solve()
{
    int N, P;
    cin >> N >> P;
    vector<double> results(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> results[i];
    }
    double average = Average(results);
    if (P == 100 && average != P)
    {
        cout << "impossible";
    }
    else
    {
        double total = Total(results);
        int forged_Scores = 0;
        while (total / results.size() < P)
        {
            total += 100;
            results.push_back(100);
            forged_Scores++;
        }
        cout << forged_Scores;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}