//https://leetcode.com/problems/most-frequent-even-element/submissions/971641783/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1;
        int mx = -1;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                mp[nums[i]]++;
            }
        }
        for(auto it:mp){
            if(it.second > mx){
                mx = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};