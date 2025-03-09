// https://leetcode.com/problems/count-asterisks/submissions/1567822939/

class Solution {
    public:
        int countAsterisks(string s) {
            int ans = 0;
            vector<char> stack;
            for(int i = 0; i<s.size(); i++){
                if(s[i] == 124){
                    if(stack.size()){
                        stack.pop_back();
                    }else{
                        stack.push_back(124);
                    }
                }
                if(s[i] == 42){
                    if(stack.size() == 0){
                        ans++;
                    }
                }
            }
            return ans;
        }
    };