/*
 Consecutive Characters
 https://leetcode.com/problems/consecutive-characters/

 The power of the string is the maximum length of a non-empty 
 substring that contains only one unique character.

 Given a string s, return the power of s.

Example 1:

Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.

*/

class Solution {
public:
    int maxPower(string s) {
        int ans=0,n=s.size(),c=0;
        if(n==1)return 1;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
            }
            else
            {
                ans=max(ans,c+1);
                c=0;
            }
        }
        ans=max(ans,c+1);
        return ans;
    }
};