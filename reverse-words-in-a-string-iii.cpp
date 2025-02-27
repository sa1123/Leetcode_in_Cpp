// https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/1556867053/

class Solution {
    public:
        string reverseWords(string s) {
            vector<char> stack;
            string ans = "";
            for(int i = 0; i<s.size(); i++){
                stack.push_back(s[i]);
                if(s[i] == 32){
                    while(stack.size()){
                        ans += stack.back();
                        stack.pop_back();
                    }
                } 
            }
            ans += " ";
            while(stack.size()){
                ans += stack.back();
                stack.pop_back();
            }
            ans.erase(ans.begin());
            return ans;
        }
    };