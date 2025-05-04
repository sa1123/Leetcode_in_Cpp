// https://leetcode.com/problems/coin-change-ii/submissions/1625031601/

class Solution {
    private:
        int coinChangeRec(vector<int>& coins, int amount, int index, int dp[301][5001]){
            if(index >= coins.size()){
                return 0;
            }
            if(amount == 0){
                return 1;
            }
            if(dp[index][amount] != -1){
                return dp[index][amount];
            }
            if(coins[index] > amount){
                return dp[index][amount] = coinChangeRec(coins, amount, index + 1, dp);
            }else{
                return dp[index][amount] = coinChangeRec(coins, amount - coins[index], index, dp) + coinChangeRec(coins, amount, index + 1, dp);
            }
        }
    public:
        int change(int amount, vector<int>& coins) {
            int dp[301][5001];
            memset(dp, -1, sizeof(dp));
            return coinChangeRec(coins, amount, 0, dp);
        }
    };