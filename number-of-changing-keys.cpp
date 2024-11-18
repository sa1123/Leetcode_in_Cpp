// https://leetcode.com/problems/number-of-changing-keys/submissions/1456557559/

class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for(int i = 1; i<s.size(); i++){
            if(s[i]+0 == s[i-1] || s[i]+0 == s[i-1]-32 || s[i]+0 == s[i-1]+32){
                ans+=0;
            }else{
                ans++;
            }
        }
        return ans;
    }
};