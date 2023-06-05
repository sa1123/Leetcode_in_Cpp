//https://leetcode.com/problems/sign-of-the-product-of-an-array/submissions/964148514/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0)
                return 0;
            if(nums[i] < 0){
                ans*=-1;
            }
        }
        return ans;
    }
};