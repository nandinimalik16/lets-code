//  Minimum cost to Move chips to the same position
// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even=0,odd=0;
        for(int i:position)
        {
            if(i%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        return min(even,odd);
    }
};