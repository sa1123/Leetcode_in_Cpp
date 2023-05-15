//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/950689747/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[c] != nums[i]){
                c++;
                nums[c] = nums[i];
                cout<<nums[c]<<endl;
            }
        }
        
        return c+1;
    }
};