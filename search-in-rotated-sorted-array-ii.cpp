//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/977033076/

class Solution {
public:
    int binS(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }

    bool search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        if(binS(nums, target) == -1){
            return false;
        }else{
            return true;
        }
    }
};