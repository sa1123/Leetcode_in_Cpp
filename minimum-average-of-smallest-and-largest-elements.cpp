// https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/submissions/1357487522/

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        double ans = FLT_MAX;

        int i = 0;
        int j = nums.size()-1;
        while(i < j){
            ans = std::min(ans, (double)(nums[i]+nums[j])/2);
            i++;
            j--;
        }

        return ans;
    }
};