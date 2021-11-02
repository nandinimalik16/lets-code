//Length of the last word
//  https://leetcode.com/problems/length-of-last-word/
/*
Given a string s consisting of some words separated by some number of spaces, 
return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int f=0;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                f++;
            }
            else
            {
                if(f>0)
                {
                    break;
                }
                else
                    continue;
            }
            
        }
        return f;
    }
};