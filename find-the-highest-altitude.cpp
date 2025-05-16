// https://leetcode.com/problems/find-the-highest-altitude/submissions/1635284898/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int curr = 0;
        for(int i = 0; i<gain.size(); i++){
            curr += gain[i];
            ans = max(ans, curr);
        }
        return ans;
    }
};