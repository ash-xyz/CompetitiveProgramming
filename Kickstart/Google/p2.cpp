#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string word)
{
    vector<int> freq(26, 0); //Stores the frequency of each letter in our word
    int oddCounter = 0;
    //The idea is to make sure we have at most one odd set of characters, as the odd character can be placed in the middle of the palindrome
    for (int i = 0; i < word.size(); i++)
    {
        freq[word[i]]++;
        //If the frequency of our character is odd, we increment the odd counter
        if (freq[word[i]] % 2 != 0)
            oddCounter++;
        //If we the frequency of our character in even, we decrement the odd counter
        else
            oddCounter--;
    }
    //Only true if we have less that one odd character
    return oddCounter < 2;
}

int main()
{
    cout << checkPalindrome("oij") << " " << checkPalindrome("vicic") << " " << checkPalindrome("level") << " " << checkPalindrome("bacabc") << " " << checkPalindrome("a");
}