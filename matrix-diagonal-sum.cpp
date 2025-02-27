// https://leetcode.com/problems/matrix-diagonal-sum/submissions/1556837001/

class Solution {
    public:
        int diagonalSum(vector<vector<int>>& mat) {
            int ans = 0;
            for(int i = 0; i<mat.size(); i++){
                for(int j = 0; j<mat[i].size(); j++){
                    // Primary
                    if(i == j){
                        ans += mat[i][j];
                        mat[i][j] = 0;
                    }
                    // Secondary
                    if(i+j == mat.size()-1){
                        ans += mat[i][j];
                        mat[i][j] = 0;
                    }
                }
            }
            return ans;
        }
    };