// https://leetcode.com/problems/find-if-digit-game-can-be-won/submissions/1357385183/

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single_digit_sum = 0;
        int double_digit_sum = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > 9){
                double_digit_sum+=nums[i];
            }else{
                single_digit_sum+=nums[i];
            }
        }

        if(single_digit_sum == double_digit_sum){
            return false;
        }else{
            return true;
        }
    }
};