// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1628345507/

class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            vector<bool> ans;
            int mx = 0;
            for(int i = 0; i<candies.size(); i++){
                mx = max(mx, candies[i]);
            }
            for(int i = 0; i<candies.size(); i++){
                if(candies[i] + extraCandies >= mx){
                    ans.push_back(true);
                }else{
                    ans.push_back(false);
                }
            }
            return ans;
        }
    };