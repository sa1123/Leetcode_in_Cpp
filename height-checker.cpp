// https://leetcode.com/problems/height-checker/submissions/1457315227/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights;
        sort(sorted.begin(), sorted.end());
        int ans = 0;

        for(int i = 0; i<sorted.size(); i++){
            if(sorted[i] != heights[i]){
                ans++;
            }
        }
        
        return ans;
    }
};