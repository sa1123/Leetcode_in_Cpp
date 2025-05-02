// https://leetcode.com/problems/partition-equal-subset-sum/submissions/1623523898/

class Solution {
    private:
        int recSolver(vector<int>& nums, int curr, int i,  vector<vector<int>>& dp){
            if(i >= nums.size() || curr < 0){
                return 0;
            }
    
            if(curr == 0){
                return 1;
            }
    
            if(dp[curr][i] != -1){
                return dp[curr][i];
            }
    
            return dp[curr][i] = recSolver(nums, curr-nums[i], i+1, dp) || recSolver(nums, curr, i+1, dp);
        }
    public:
        bool canPartition(vector<int>& nums) {
            int sum = 0;
            for(int i = 0; i<nums.size(); i++){
                sum += nums[i];
            }
    
            if(sum%2 != 0){
                return false;
            }else{
                vector<vector<int>> dp((sum/2) + 1, vector<int>(nums.size(), -1));
                return recSolver(nums, sum/2, 0, dp);
            }
        }
    };