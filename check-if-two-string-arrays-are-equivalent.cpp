// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/1448555182/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = "";
        for(int i = 0; i<word1.size(); i++){
            w1.append(word1[i]);
        }

        string w2 = "";
        for(int i = 0; i<word2.size(); i++){
            w2.append(word2[i]);
        }

        return w1 == w2;
    }
};