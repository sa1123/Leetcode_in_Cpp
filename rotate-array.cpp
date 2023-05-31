//https://leetcode.com/problems/rotate-array/submissions/960729693/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        if(k==0){
            return;
        }

        int arr[nums.size()];

        for(int i=0; i<k; i++){
            arr[i] = nums[nums.size()-k+i];
        }

        for(int i=k; i<nums.size(); i++){
            arr[i] = nums[i-k];
        }

        for(int i=0; i<nums.size(); i++){
            nums[i] = arr[i];
        }

        return;
    }
};