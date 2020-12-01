#include <bits/stdc++.h>
using namespace std;
//Basically a two-sum question
void solve_two_sum()
{
    unordered_map<int, int> map;
    int ans;
    for (int i = 0; i < 200; i++)
    {
        int cur;
        cin >> cur;
        int inverse = 2020 - cur;
        if (map.find(inverse) != map.end())
        {
            ans = inverse * cur;
        }
        map[cur] = i;
    }
    cout << "Answer: " << ans << endl;
}

void solve_three_sum()
{
    vector<int> nums;
    for (int i = 0; i < 200; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    unordered_map<int, int> map;
    int ans;
    for (int i = 0; i < 200; i++)
    {
        for (int j = i + 1; j < 200; j++)
        {
            int compliment = 2020 - nums[i] - nums[j];
            if (map.find(compliment) != map.end())
            {
                ans = compliment * nums[i] * nums[j];
            }
        }
        map[nums[i]] = i;
    }
    cout << "Answer: " << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve_three_sum();
}