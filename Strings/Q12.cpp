//Minimum Time to Type Word Using Special Typewriter
// https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/



class Solution {
public:
    int minTimeToType(string word) {
        int res=0,pt=0;
        for(int i=0;i<word.size();i++)
        {
            int m1=abs((word[i]-'a')-pt);
            int m2=abs(26-m1);
            res+=min(m2,m1)+1;
            pt=word[i]-'a';
        }
        return res;
    }
};