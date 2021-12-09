// Jump Game III
// https://leetcode.com/problems/jump-game-iii/

/*

Given an array of non-negative integers arr, you are initially positioned at start index of the array.
 When you are at index i, you can jump to i + arr[i] or i - arr[i], 
 check if you can reach to any index with value 0.

Notice that you can not jump outside of the array at any time.


Example 1:

Input: arr = [4,2,3,0,3,1,2], start = 5
Output: true
Explanation: 
All possible ways to reach at index 3 with value 0 are: 
index 5 -> index 4 -> index 1 -> index 3 
index 5 -> index 6 -> index 4 -> index 1 -> index 3 


*/

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        queue<int>q;
        vector<int>m(n,0);
        q.push(start);
        m[start]=1;
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            if(arr[f]==0)
            {
                return true;
            }
            if(f+arr[f]<n && m[f+arr[f]]==0)
            {
                q.push(f+arr[f]);
                m[f+arr[f]]=1;
            }
            if(f-arr[f]>=0 && m[f-arr[f]]==0)
            {
                q.push(f-arr[f]);
                m[f-arr[f]]=1;
            }
        }
        return false;
    }
};