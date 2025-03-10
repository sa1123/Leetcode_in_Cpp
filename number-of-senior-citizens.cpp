// https://leetcode.com/problems/number-of-senior-citizens/submissions/1569002770/

class Solution {
    public:
        int countSeniors(vector<string>& details) {
            int ans = 0;
            for(int i = 0; i<details.size(); i++){
                if((details[i][11]-48)*10 + details[i][12]-48 > 60){
                    ans++;
                }
            }
            return ans;
        }
    };