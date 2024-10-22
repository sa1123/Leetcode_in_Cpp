// https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/submissions/1430241579/

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k){
            int curr_min = *min_element(nums.begin(), nums.end());
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] == curr_min){
                    nums[i] *= multiplier;
                    k--;
                    break;
                }
            }
        }
        return nums;
    }
};