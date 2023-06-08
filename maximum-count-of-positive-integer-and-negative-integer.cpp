//https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/submissions/966579166/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            if(nums[l]>0){
                return nums.size()-l;
            }
            if(nums[r]<0){
                return r+1;
            }
            if(nums[l] != 0){
                l++;
            }
            if(nums[r] != 0){
                r--;
            }
            if(nums[l] == 0 && nums[r] == 0){
                return fmax(l, nums.size()-r-1);
            }
        }
        return fmax(l, nums.size()-r-1);
    }
};