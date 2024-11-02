// https://leetcode.com/problems/circular-sentence/submissions/1440766198/?envType=daily-question&envId=2024-11-02

class Solution {
public:
    bool isCircularSentence(string sentence) {

        for(int i = 1; i<sentence.size(); i++){
            if(sentence[i] == 32 && i != sentence.size()-1){
                if(sentence[i-1] != sentence[i+1]){
                    return false;
                }
            }
        }

        if(sentence[0] == sentence[sentence.size()-1]){
            return true;
        }else{
            return false;
        }
    }
};