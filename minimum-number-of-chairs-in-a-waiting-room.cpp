// https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/submissions/1457346143/

class Solution {
public:
    int minimumChairs(string s) {
        int curr = 0;
        int ans = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i]+0 == 76){
                if(curr>0){
                    curr--;
                }
            }else{
                curr++;   
            }
            ans = max(ans, curr);
        }

        return ans;
    }
};