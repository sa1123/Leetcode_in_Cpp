// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/submissions/1639348020/

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] - nums[j] == k || nums[i] - nums[j] == -k){
                    ans++;
                }
            }
        }
        return ans;
    }
};