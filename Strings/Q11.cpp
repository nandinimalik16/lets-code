//Minimum moves to convert string
//https://leetcode.com/problems/minimum-moves-to-convert-string/


class Solution {
public:
    int minimumMoves(string s) {
        int ct=0,i=0,len=s.size();
        while(i<len)
        {
            if(s[i]=='X')
            {
                ct++;
                s[i]='O';
                if(i+1<len && s[i+1]=='X')
                    s[i+1]='O';
                if(i+2<len && s[i+2]=='X')
                    s[i+2]='O';
                i+=2;
            }
            
                i++;
        }
        return ct;
    }
};