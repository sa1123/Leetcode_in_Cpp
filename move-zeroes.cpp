//https://leetcode.com/problems/move-zeroes/submissions/950878794/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> arr;
        int c = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                arr.push_back(nums[i]);
                c++;
            }
        }

        for(int i=0; i<arr.size(); i++){
            nums[i] = arr[i];
        }

        for(int i=c; i<nums.size(); i++){
            nums[i] = 0;
        }
        
        return;
    }
};


//https://leetcode.com/problems/move-zeroes/submissions/950888681/
//Less space
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i] == 0){
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j] != 0){
                        nums[i] = nums[j];
                        nums[j] = 0;
                        break;
                    }
                }
            }
            i++;
        }
    }
};