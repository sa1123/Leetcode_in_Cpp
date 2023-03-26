// https://leetcode.com/problems/concatenation-of-array/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> out(size(nums)*2);

        for(int i = 0; i<size(nums); i++){
            out[i] = nums[i];
        }

        for(int i = 0; i<size(nums); i++){
            out[i+size(nums)] = nums[i];
        }

        return out;
    }
};