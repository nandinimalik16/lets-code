// Permutation In String
// https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left=0,right=0;
        int l1=s1.size(),l2=s2.size();
        vector<int>m1(26,0),m2(26,0);
        if(l1>l2)
        {
            return false;
        }
        while(right<l1)
        {
            m1[s1[right]-'a']++;
            m2[s2[right]-'a']++;
            right++;
        }
        right--;
        while(right<l2)
        {
            if(m1==m2)
            {
                return true;
            }
            right++;
            if(right<l2)
            {
                m2[s2[right]-'a']++;
            }
            m2[s2[left]-'a']--;
            left++;
        }
        return false;
    }
};
