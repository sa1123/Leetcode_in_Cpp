// https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/submissions/1432420633/

class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for(int i = 0; i<nums.size(); i++){
            int curr = 0;
            while(nums[i]){
                curr += (nums[i]%10);
                nums[i] /= 10;
            }
            ans = min(curr, ans);
        }

        return ans;
    }
};