// Sort an Array
// https://leetcode.com/problems/sort-an-array/

class Solution {
public:
    vector<int> sortArray(vector<int>& a) {
        map<int,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        vector<int>m;
        for(auto it:mp)
        {
            while(it.second)
            {
                m.push_back(it.first);
                it.second--;
            }
        }
        return m;
    }
};