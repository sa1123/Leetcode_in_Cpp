// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1257511433/

//Two pointer approach. Whenever a new number is detected, move it down.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[c] != nums[i]){
                c++;
                nums[c] = nums[i];
            }
        }
        
        return c+1;
    }
};

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1257506417/

//Using set

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::set<int> n_set;
        for(int i=0; i<nums.size(); i++){
            n_set.insert(nums[i]);
        }
        int j=0;
        for(auto i:n_set){
            nums[j] = i;
            j++;
        }
        return n_set.size();
    }
};