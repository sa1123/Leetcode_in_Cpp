// https://leetcode.com/problems/contains-duplicate-ii/submissions/1644715741/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size();
        for(int i=0; i<size; i++){
            int j = i+1;
            int end = min(j+k, size);
            while(j < end){
                if(nums[i] == nums[j] && abs(i - j) <= k){
                   return true;
                }
                j++;
            }
        }
        return false;
    }
};