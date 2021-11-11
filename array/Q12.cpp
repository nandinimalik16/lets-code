// Container with most water
//https://leetcode.com/problems/container-with-most-water/
// related topics: array, two-pointers, greedy

class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1,area=0;
        while(i<j)
        {
            int l,l1=h[i],l2=h[j];
            l=min(l1,l2);
            area=max(area,l*(j-i));
            if(l1<l2)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
    }
};