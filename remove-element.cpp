//https://leetcode.com/problems/remove-element/submissions/973842375/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low = 0, high = nums.size()-1;
        while(low<high){
            if(nums[low] == val){
                while(nums[high] == val && low<high){
                    high--;
                }
                nums[low] = nums[high];
                nums[high] = val;
            }
            low++;
        }
        int count = 0, i = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};