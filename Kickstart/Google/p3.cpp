#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> matchedParentheses(string canidate)
{
    stack<int> stack; //Stores the location of our opening parenthesis '('
    vector<pair<int, int>> ans;
    for (int i = 0; i < canidate.size(); i++)
    {
        if (canidate[i] == ')')
        {
            try
            {
                ans.push_back({stack.top(), i});
                stack.pop();
            }
            catch (int e)
            {
                cout << "Error, invalid Parentheses" << endl;
                return {};
            }
        }
        else if (canidate[i] == '(')
        {
            stack.push(i);
        }
    }
    if (stack.empty())
        return ans;
    else
    {
        cout << "Error, invalid Parentheses" << endl;
        return {};
    }
}
int main()
{
    vector<pair<int, int>> ans = matchedParentheses("(())");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}