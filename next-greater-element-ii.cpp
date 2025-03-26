// https://leetcode.com/problems/next-greater-element-ii/submissions/1586607158/

class Solution {
    public:
        vector<int> nextGreaterElements(vector<int>& nums) {
            vector<int> ans = nums;
            for(int i = 0; i<nums.size(); i++){
                for(int j = i+1; j<nums.size(); j++){
                    if(nums[j] > nums[i]){
                        ans[i] = nums[j];
                        break;
                    }
                }
                if(ans[i] == nums[i]){
                    for(int k = 0; k<i; k++){
                        if(nums[k] > nums[i]){
                            ans[i] = nums[k];
                            break;
                        }
                    }
                }
                if(ans[i] == nums[i]){
                    ans[i] = -1;
                }
            }
            return ans;
        }
    };