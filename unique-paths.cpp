// https://leetcode.com/problems/unique-paths/submissions/1625554462/

class Solution {
    private:
        int upRec(int m, int n, int i, int j, int dp[101][101]){
            if(i >= m || j >= n){
                return 0;
            }
            if(i == m-1 && j == n-1){
                return 1;
            }
            if(dp[i][j] != 0){
                return dp[i][j];
            }        
            return dp[i][j] = upRec(m, n, i, j+1, dp) + upRec(m, n, i+1, j, dp);
        }
    public:
        int uniquePaths(int m, int n) {
            int dp[101][101];
            memset(dp, 0, sizeof(dp));
            return dp[m-1][n-1] = upRec(m, n, 0, 0, dp);
        }
    };