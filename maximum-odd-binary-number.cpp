// https://leetcode.com/problems/maximum-odd-binary-number/submissions/1556883414/

class Solution {
    public:
        string maximumOddBinaryNumber(string s) {
            string ans = "";
            for(int i = 0; i<s.size(); i++){
                if(s[i] == 49){
                    ans += "1";
                }
            }
            if(ans.size()){
                ans.pop_back();
            }
            while(ans.size() < s.size()-1){
                ans += "0";
            }
            ans += "1";
            return ans;
        }
    };