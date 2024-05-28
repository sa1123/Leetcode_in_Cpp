// https://leetcode.com/problems/special-array-i/submissions/1267251293/

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]%2 == nums[i-1]%2){
                return false;
            }
        }
        return true;
    }
};