// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/submissions/1448439130/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 1;

        for(int i = 0; i<sentences.size(); i++){
            int curr = 1;
            for(int j = 0; j<sentences[i].size(); j++){
                if(sentences[i][j] == 32){
                    curr++;
                }
            }
            if(curr > ans){
                ans = curr;
            }
        }

        return ans;
    }
};