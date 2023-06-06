//https://leetcode.com/problems/squares-of-a-sorted-array/submissions/965081329/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i] = pow(nums[i],2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};