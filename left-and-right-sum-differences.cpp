// https://leetcode.com/problems/left-and-right-sum-differences/submissions/1555991818/

class Solution {
    public:
        vector<int> leftRightDifference(vector<int>& nums) {
            vector<int> ans(nums.size(), 0);
            if(nums.size() == 1){
                return ans;
            }
            int left = 0;
            int right = 0;
            for(int k = 1; k<nums.size(); k++){
                    right += nums[k];
            }
            for(int i = 0; i<nums.size()-1; i++){ 
                ans[i] = abs(right - left);
                left += nums[i];
                right -= nums[i+1];
            }
            ans[nums.size()-1] = left;
            return ans;
        }
    };