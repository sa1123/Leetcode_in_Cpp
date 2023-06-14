//https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/970278263/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        for(int i=0, j=0; i<nums.size(); i+=2, j++){
            nums[i] = pos[j];
            nums[i+1] = neg[j];
        }
        return nums;
    }
};