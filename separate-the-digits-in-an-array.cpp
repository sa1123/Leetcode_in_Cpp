// https://leetcode.com/problems/separate-the-digits-in-an-array/submissions/1570008249/

class Solution {
    public:
        vector<int> separateDigits(vector<int>& nums) {
            vector<int> ans;
            vector<int> curr;
            for(int i = 0; i<nums.size(); i++){
                while(nums[i]){
                    curr.push_back(nums[i] % 10);
                    nums[i] /= 10;
                }
                while(curr.size()){
                    ans.push_back(curr.back());
                    curr.pop_back();
                }
            }
            return ans;
        }
    };