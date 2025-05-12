// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/1631820602/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count[102];
        memset(count, 0, sizeof(count));
        for(int i = 0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            int temp = 0;
            for(int j = 0; j<nums[i]; j++){
                temp += count[j];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};