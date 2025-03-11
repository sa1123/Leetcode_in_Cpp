// https://leetcode.com/problems/isomorphic-strings/submissions/1570169208/

class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            for(int i = 0; i<s.size(); i++){
                char curr = t[i];
                for(int j = i+1; j<t.size(); j++){
                    if(t[j] == t[i]){
                        if(s[j] != s[i]){
                            return false;
                        }
                    }
                }
            }
            for(int i = 0; i<s.size(); i++){
                char curr = s[i];
                for(int j = i+1; j<t.size(); j++){
                    if(s[j] == s[i]){
                        if(t[j] != t[i]){
                            return false;
                        }
                    }
                }
            }
            return true;
        }
    };