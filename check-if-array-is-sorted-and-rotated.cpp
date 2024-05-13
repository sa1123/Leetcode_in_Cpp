// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/1257037433/

// Iterate over given array until point of rotation by comparing with previous value. If there's no rotation, return true. Set flag at point of rotation and start copying elements from this point till the end into a new array. If more points of rotation are found, return false. Initialize a new loop and copy all the values till the point of rotation into the new array. Iterate over new array. If it is sorted, return true, otherwise return false.

class Solution {
public:
    bool check(vector<int>& nums) {
        int arr[nums.size()];
        bool flag = false;
        int rot_pt;
        int j = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] > nums[i]){
                if(flag){
                    return false;
                }else{
                    flag = true;
                    rot_pt = i;
                }
            }
            if(flag){
                arr[j] = nums[i];
                j++;
            }
        }
        if(!flag){
            return true;
        }else{
            for(int k=0; k<rot_pt; k++){
                arr[j] = nums[k];
                j++;
            }
            for(int i=1; i<nums.size(); i++){
                if(arr[i-1] > arr[i]){
                    return false;
                }
            }
        }
        return true;
    }
};