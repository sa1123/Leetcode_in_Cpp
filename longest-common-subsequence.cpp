// https://leetcode.com/problems/longest-common-subsequence/submissions/1626820376/

class Solution {
    private:
        int lcsRec(string& text1, string& text2, int m, int n, int dp[1001][1001]){
            if(n == 0 || m == 0){
                return 0;
            }
            if(dp[m-1][n-1] != -1){
                return dp[m-1][n-1];
            }
            if(text1[m-1] == text2[n-1]){
                return dp[m-1][n-1] = 1 + lcsRec(text1, text2, m-1, n-1, dp);
            }else{
                return dp[m-1][n-1] = max(lcsRec(text1, text2, m, n-1, dp), lcsRec(text1, text2, m-1, n, dp));
            }
        }
    public:
        int longestCommonSubsequence(string text1, string text2) {
            int dp[1001][1001];
            memset(dp, -1, sizeof(dp));
            return lcsRec(text1, text2, text1.size(), text2.size(), dp);
        }
    };