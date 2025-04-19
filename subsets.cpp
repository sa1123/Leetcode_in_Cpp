// https://leetcode.com/problems/subsets/submissions/1611506757/

class Solution {
    private:
        void subrec(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
            //base case
            if(index >= nums.size()){
                ans.push_back(output);
                return;
            }
    
            //exclude index element in output array
            subrec(nums, output, index+1, ans);
    
            //include index element in output array
            output.push_back(nums[index]);
            subrec(nums, output, index+1, ans);
        }
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> output;
            int index = 0;
            subrec(nums, output, index, ans);
            return ans;
        }
    };