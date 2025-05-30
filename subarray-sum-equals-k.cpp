// https://leetcode.com/problems/subarray-sum-equals-k/submissions/970264270/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int sum = 0;
        map<int, int> sum_map;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum == k){
                ans++;
            }
            ans+=sum_map[sum - k];
            sum_map[sum]++;
        }
        return ans;
    }
};