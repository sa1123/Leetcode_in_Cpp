// https://leetcode.com/problems/keep-multiplying-found-values-by-two/submissions/1834347865/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool foundValue = true;
        int new_value = original;
        while(foundValue) {
            for(vector<int>::const_iterator it = nums.cbegin(); it != nums.cend(); it++) {
                if(original == *it) {
                    new_value = (original << 1);
                    break;
                }
            }
            foundValue = (new_value != original);
            original = new_value;
        }
        return original;
    }
};

// https://leetcode.com/problems/keep-multiplying-found-values-by-two/submissions/1834390182

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == original){
                original = original * 2;
            }
        }
        return original;
    }
};