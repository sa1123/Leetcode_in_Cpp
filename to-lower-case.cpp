// https://leetcode.com/problems/to-lower-case/submissions/1636105994

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i<s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                s[i] = s[i]+32;
            }
        }
        return s;
    }
};