// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/1636418509/

class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0;
        int right = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 40){
                left++;
            }else{
                if(left){
                    left--;
                }else{
                    right++;
                }
            }
        }
        return left + right;
    }
};