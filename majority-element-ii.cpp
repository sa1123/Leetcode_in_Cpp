//https://leetcode.com/problems/majority-element-ii/submissions/971614730/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second > (nums.size()/3)){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};