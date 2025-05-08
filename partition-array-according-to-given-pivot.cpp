// https://leetcode.com/problems/partition-array-according-to-given-pivot/submissions/1628837227/

class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> less;
            vector<int> more;
            int equal = 0;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] < pivot){
                    less.push_back(nums[i]);
                }else if(nums[i] > pivot){
                    more.push_back(nums[i]);
                }else{
                    equal++;
                }
            }
            for(int i = 0; i<equal; i++){
                less.push_back(pivot);
            }
            for(int i = 0; i<more.size(); i++){
                less.push_back(more[i]);
            }
            return less;
        }
    };