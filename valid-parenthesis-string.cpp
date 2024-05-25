// https://leetcode.com/problems/valid-parenthesis-string/submissions/1267154568/

// Use two stacks

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st_stk;
        stack<int> ob_stk;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                ob_stk.push(i);
            }
            else if(s[i] == '*')
            {
                st_stk.push(i);
            }
            else if(s[i] == ')')
            {
                if(ob_stk.empty() && st_stk.empty()) 
                    return false;
                else if(!ob_stk.empty()) 
                    ob_stk.pop();
                else    
                    st_stk.pop();;
            }
        }

        while(!ob_stk.empty())
        {
            if(st_stk.empty()) return false;
            if(ob_stk.top() > st_stk.top()) return false; // for cases such as ***((
            ob_stk.pop();
            st_stk.pop();
        }

        return true;
    }
};