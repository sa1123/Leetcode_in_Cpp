//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/966557709/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=grid.size()-1; i>=0; i--){
            for(int j=grid[0].size()-1; j>=0; j--){
                if(grid[i][j] < 0){
                    ans++;
                }else{
                    break;
                }
            }
        }

        return ans;
    }
};