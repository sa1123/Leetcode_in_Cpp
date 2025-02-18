// https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/submissions/1547409073/

class Solution {
    public:
        int maxAdjacentDistance(vector<int>& nums) {
            int ans = abs(nums[0]-nums[nums.size()-1]);
            for(int i = 1; i<nums.size(); i++){
                ans = max(ans, abs(nums[i]-nums[i-1]));
            }
            return ans;
        }
    };