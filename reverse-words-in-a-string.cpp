//https://leetcode.com/problems/reverse-words-in-a-string/submissions/956246494/

class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        string str;
        for(int i=0; i<s.length(); i++){
            if(s[i] != 32){
                str.push_back(s[i]);
            }else{
                if(str.length()){
                    stk.push(str);
                    str = "";
                }
            }
        }
        if(str.length()){
            stk.push(str);
            str = "";
        }
        if(stk.size()){
            str = stk.top();
            stk.pop();
        }
        while(stk.size()){
            str = str + " " + stk.top();
            stk.pop();
        }
        return str;
    }
};