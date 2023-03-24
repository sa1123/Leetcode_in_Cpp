// https://leetcode.com/problems/valid-parentheses/submissions/921296960/

class Solution {
public:
    bool isValid(string s) {
        stack<char> parstack;
        int len = s.size();
        for(int i=0; i<len; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                parstack.push(s[i]);
            }else if(parstack.empty()){
                return false;
            }else if((parstack.top() == '(' && s[i] == ')') || (parstack.top() == '{' && s[i] == '}') || (parstack.top() == '[' && s[i] == ']')){
                parstack.pop();
            }else{
                return false;
            }
        }
        if(parstack.empty())
            return true;
        return false;
    }
};