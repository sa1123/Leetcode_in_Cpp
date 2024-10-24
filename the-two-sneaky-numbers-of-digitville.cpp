// https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/submissions/1432427424/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> map(nums.size());
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]]++;
            if(map[nums[i]] == 2){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};