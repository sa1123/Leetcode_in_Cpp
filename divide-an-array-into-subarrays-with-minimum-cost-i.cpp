// https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/submissions/1904113380/

class Solution {
public:
    int find_min(vector<int>& nums){
        int ans = 51;
        for(int i = 1; i<nums.size(); i++){
            ans = min(ans, nums[i]);
        }
        return ans;
    }

    int find_sec_sml(int sml, vector<int>& nums){
        int ans = 51;
        int dup_count = 0;
        for(int i = 1; i<nums.size(); i++){  
            if(nums[i] != sml){
                ans = min(ans, nums[i]);
            }else{
                dup_count++;
            }
            if(dup_count > 1){
                return sml;
            }
        }
        return ans;
    }

    int minimumCost(vector<int>& nums) {
        int sml = find_min(nums);
        int sec_sml = find_sec_sml(sml, nums);
        return sml + sec_sml + nums[0];
    }
};