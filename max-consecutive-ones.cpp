//https://leetcode.com/problems/max-consecutive-ones/submissions/951237162/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        bool flag = false;
        int out = 0;
        int curr = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                flag = true;
            }else{
                flag = false;
                curr = 0;
            }
            if(flag){
                curr++;
            }
            if(curr > out){
                out = curr;
            }
        }
        return out;
    }
};