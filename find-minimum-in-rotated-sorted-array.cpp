//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/977036114/

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};