//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/959638844/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target && ans[0] == -1){
                ans[0] = i;
                ans[1] = i;
            }
            if(ans[0] != -1 && nums[i] != target){
                ans[1] = i-1;
                return ans;
            }
        }
        if(ans[0] != -1){
            ans[1] = nums.size()-1;
        }
        return ans;
    }
};