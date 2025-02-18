// https://leetcode.com/problems/number-of-good-pairs/submissions/1547529538/

class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            int ans = 0;
            
            for(int j = 0; j<nums.size(); j++){
                int curr = nums[j];
                for(int i = j+1; i<nums.size(); i++){
                    if(nums[i] == curr){
                        ans++;
                    }
                }
            }
            return ans;
        }
    };