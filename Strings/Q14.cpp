//Longest palindrome
// https://leetcode.com/problems/longest-palindrome/submissions/


class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int r=0;
        bool b=false;
        for(auto ch: mp)
        {
            if(ch.second%2==0)
            {
                r+=ch.second;
            }
            else
            {
                b=true;
                r+=ch.second-1;
            }
        }
        if(b)
            r++;
        return r;
    }
};