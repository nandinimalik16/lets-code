//Valid Palindrom II
//https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    bool sol(string s,int l,int r)
    {
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                return sol(s,l+1,r) || sol(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
        
    }
};