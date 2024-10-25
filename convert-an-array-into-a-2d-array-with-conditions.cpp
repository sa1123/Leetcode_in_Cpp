// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/submissions/1433172401/

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int flag = 0;
        vector<vector<int>> ans;

        while(flag<nums.size()){
            vector<int> subv;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] != -1 && count(subv.begin(), subv.end(), nums[i]) == 0){
                    subv.push_back(nums[i]);
                    nums[i] = -1;
                    flag++;
                }
            }
            ans.push_back(subv);
        }

        return ans;
    }
};