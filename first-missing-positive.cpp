// https://leetcode.com/problems/first-missing-positive/submissions/1641856345/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == ans){
                ans++;
            }
        }
        return ans;
    } 
};