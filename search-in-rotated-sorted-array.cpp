//https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/972601659/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, h=nums.size()-1;
        while(low<=h){
            int m = (low+h)/2;
            if(nums[m] == target){
                return m;
            }

            if(nums[low] <= nums[m]){
                if(target >= nums[low] && target <= nums[m]){
                    h = m-1;
                }else{
                    low = m+1;
                }
            }else{
                if(target >= nums[m] && target <= nums[h]){
                    low = m+1;
                }else{
                    h = m-1;
                }
            }
        }
        return -1;
    }
};