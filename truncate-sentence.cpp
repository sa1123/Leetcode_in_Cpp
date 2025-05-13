// https://leetcode.com/problems/truncate-sentence/submissions/1632530981/

class Solution {
public:
    string truncateSentence(string s, int k) {
        int words = 0;
        int loc = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 32){
                words++;
            }
            if(words < k){
                loc++;
            }
        }
        s.resize(loc);
        return s;
    }
};