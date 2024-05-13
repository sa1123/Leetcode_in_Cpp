//https://leetcode.com/problems/majority-element/submissions/951434177/

//Sorting

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};

//https://leetcode.com/problems/majority-element/submissions/1256876284/

//Hashmap

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto j:mp){
            if(j.second > nums.size()/2){
                return j.first;
            }
        }
        return 0;
    }
};