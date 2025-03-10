// https://leetcode.com/problems/replace-all-digits-with-characters/submissions/1568940963/

class Solution {
    public:
        string replaceDigits(string s) {
            for(int i = 1; i<s.size(); i = i+2){
                s[i] = s[i-1] + s[i] - 48;
            }
            return s;
        }
    };