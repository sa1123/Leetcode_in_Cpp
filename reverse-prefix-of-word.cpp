// https://leetcode.com/problems/reverse-prefix-of-word/submissions/1448548656/

class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        bool flag = false;
        for(int i = 0; i<word.length(); i++){
            if(flag){
                ans.push_back(word[i]);
            }
            if(word[i] == ch && !flag){
                flag = true;
                for(int j = i; j>=0; j--){
                    ans.push_back(word[j]);
                }
            }
        }

        if(ans.length()){
            return ans;
        }else{
            return word;
        }
    }
};