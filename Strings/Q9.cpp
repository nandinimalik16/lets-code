// Permutation in String
//https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    //problem solved using sliding window
    bool checkInclusion(string s1, string s2) {
       vector<int>mp1(26,0),mp2(26,0);
        int l1=s1.length(),l2=s2.length();
        if(l1>l2)
            return false;
        int left=0,right=0;
        while(right<l1)
        {
            mp1[s1[right]-'a']++;
            mp2[s2[right]-'a']++;
            right++;
        }
        right-=1;
        while(right<l2)
        {
            if(mp1==mp2)
                return true;
            right++;
            if(right<l2)
            {
                mp2[s2[right]-'a']++;
            }
            mp2[s2[left]-'a']--;
            left++;
        }
        return false;
    }
};