//https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/952632989/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans^=nums[i];
        }
        return ans;
    }
};