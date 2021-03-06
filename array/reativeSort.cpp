// Relative Sort Array
// https://leetcode.com/problems/relative-sort-array/


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
         map<int,int>mp;
        vector<int> ans;
        for(int i=0;i<a1.size();i++)
            mp[a1[i]]++;
        for(int i=0;i<a2.size();i++){
            while(mp[a2[i]]!=0){
                ans.push_back(a2[i]);
                mp[a2[i]]--;
            }
            mp.erase(a2[i]);
        }
        for(auto i:mp){
            while(i.second>0){
        ans.push_back(i.first);
                i.second--;
            }
            }
        return ans;   
    }
};