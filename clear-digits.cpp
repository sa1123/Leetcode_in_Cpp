// https://leetcode.com/problems/clear-digits/submissions/1556921041/

class Solution {
    public:
        string clearDigits(string s) {
            vector<char> stack;
            for(int i = 0; i<s.size(); i++){
                if(isdigit(s[i])){
                    stack.pop_back();
                }else{
                    stack.push_back(s[i]);
                }
            }
            string ans = "";
            for(int i = 0; i<stack.size(); i++){
                ans += stack[i];
            }
            return ans;
        }
    };