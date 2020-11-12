#include <bits/stdc++.h>
using namespace std;
vector<string> anagramDetector(vector<string> dict, string word)
{
    vector<string> ans;
    unordered_map<char, int> wordFreq;
    for (int i = 0; i < word.size(); i++)
    {
        wordFreq[word[i]]++;
    }
    for (int i = 0; i < dict.size(); i++)
    {
        bool notAnagram = false;
        for (int j = 0; j < dict[i].size(); j++)
        {
            if (wordFreq.find(dict[i][j]) == wordFreq.end())
            {
                break;
                notAnagram = true;
            }
        }
        if (!notAnagram && word.size() == dict[i].size())
        {
            ans.push_back(dict[i]);
        }
    }

    return ans;
}
int main()
{
    vector<string> dict = {"tips", "spit", "pits"};
    vector<string> ans = anagramDetector(dict, "tips");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}