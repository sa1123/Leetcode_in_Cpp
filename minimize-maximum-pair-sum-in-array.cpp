// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/submissions/1895099560

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i<nums.size()/2; i++){
            ans = max((nums[i] + nums[nums.size() - 1 - i]), ans);
        }
        return ans;
    }
};