// https://leetcode.com/problems/build-array-from-permutation/submissions/922431355/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> out(size(nums));

        for(int i = 0; i<size(nums); i++){
            out[i] = nums[nums[i]];
        }
        return out;
    }
};