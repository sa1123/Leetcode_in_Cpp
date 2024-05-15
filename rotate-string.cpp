// https://leetcode.com/problems/rotate-string/submissions/1258760369/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        for(int i = 0; i<s.size(); i++){
            if(s == goal){
                return true;
            }
            char temp = s[0];
            s.erase(s.begin());
            s+=temp;
        }
        return false;
    }
};