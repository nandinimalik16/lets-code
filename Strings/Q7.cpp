//Longest Palindrome substring
//https://leetcode.com/problems/longest-palindromic-substring/submissions/

class Solution {
public:
    string longestPalindrome(string str) {
        int low=0,high=0,start=0,end=1;
        for(int i=1;i<str.length();i++)
        {
            low=i-1;
            high=i;
            while(low>=0 && high<str.length() && str[low]==str[high])
            {
                if(high-low+1>end)
                {
                    start=low;
                    end=high-low+1;
                }
                low--;
                high++;
            }
            low=i-1;
            high=i+1;
            while(low>=0 && high<str.length() && str[low]==str[high])
            {
                if(high-low+1>end)
                {
                    start=low;
                    end=high-low+1;
                }
                low--;
                high++;
            }
        }
        return str.substr(start,end);
    }
};