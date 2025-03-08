// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/submissions/1566921700/

class Solution {
    public:
        bool isAcronym(vector<string>& words, string s) {
            string acr = "";
            for(int i = 0; i<words.size(); i++){
                acr += words[i][0];
            }
            if(acr.compare(s) == 0){
                return true;
            }else{
                return false;
            }
        }
    };