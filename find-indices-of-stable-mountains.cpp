// https://leetcode.com/problems/find-indices-of-stable-mountains/submissions/1427534521/

class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans;
        
        for(int i = 0; i<height.size()-1; i++){
            if(height[i] > threshold){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};