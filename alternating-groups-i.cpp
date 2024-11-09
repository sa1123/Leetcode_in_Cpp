// https://leetcode.com/problems/alternating-groups-i/submissions/1447476379/

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans = 0;
        colors.push_back(colors[0]);
        colors.push_back(colors[1]);
        colors.push_back(colors[2]);

        for(int i = 1; i<colors.size()-2; i++){
            if(colors[i-1] != colors[i] && colors[i] != colors[i+1]){
                ans++;
            }
        }

        return ans;
    }
};