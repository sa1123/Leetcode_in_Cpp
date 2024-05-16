// https://leetcode.com/problems/remove-outermost-parentheses/submissions/1259541379/

// Keep count of '(' and ')' inserted in the stack. When numbers are equal, pop and append all but the outermost pair into ans string.

class Solution {
public:
    string removeOuterParentheses(string s) {
        std::string ans = "";
        int open = 0;
        int close = 0;
        stack<char> stk;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                stk.push('(');
                open++;
            }else{
                stk.push(')');
                close++;
                if(close == open){
                    stk.pop();
                    std::string seg = "";
                    while(open>1){
                        if(stk.top() == '('){
                            open--;
                        }
                        seg = stk.top() + seg;
                        stk.pop();
                    }
                    ans += seg;
                    stk.pop();
                    open = 0;
                    close = 0;
                }
            }
        }
        return ans;
    }
};