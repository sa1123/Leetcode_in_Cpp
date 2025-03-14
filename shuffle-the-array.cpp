// https://leetcode.com/problems/shuffle-the-array/submissions/1448427110/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0;
        int j = n;
        while(j<2*n){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }

        return ans;
    }
};