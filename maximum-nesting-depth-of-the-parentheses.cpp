// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/1259752671/

// Push "("s to stack. Compare int ans with stack's size. Pop from stack when ")" is detected.

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        std::stack<char> stk;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                stk.push('(');
                if(stk.size() > ans){
                    ans = stk.size();
                }
            }
            if(s[i] == ')'){
                stk.pop();
            }
        }
        return ans;
    }
};