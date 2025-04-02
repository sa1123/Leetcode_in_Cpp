// https://leetcode.com/problems/jump-game/submissions/1594310027/

class Solution {
    public:
        
        bool canJump(vector<int>& nums) {
            bool canskip = false;
            for(int i = 0; i<nums.size()-1; i++){
                if(nums[i] == 0){
                    for(int j = 0; j<i; j++){
                        if(nums[j] > i-j){
                            canskip = true;
                        }
                    }
                    if(canskip == false){
                        return false;
                    }
                }
                canskip = false;
            }    
            return true;
        }
    };