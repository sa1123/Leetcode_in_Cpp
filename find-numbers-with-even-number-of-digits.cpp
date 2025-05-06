// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/1626231263/

class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int ans = 0;
            for(int i = 0; i<nums.size(); i++){
                string temp = to_string(nums[i]);
                if(temp.size()%2 == 0){
                    ans++;
                }
            }
            return ans;
        }
    };