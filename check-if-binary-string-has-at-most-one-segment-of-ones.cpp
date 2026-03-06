// https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/submissions/1939875233/

class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag = false;
        for(int i = 0; i<s.size(); i++){
            if(int(s[i]) == 48){
                flag = true;
            }
            if(flag == true && int(s[i]) == 49){
                return false;
            }
        }
        return true;
    }
};