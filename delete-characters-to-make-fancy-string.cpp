// https://leetcode.com/problems/delete-characters-to-make-fancy-string/submissions/1706401650/

class Solution {
public:
    string makeFancyString(string s) {
        int counter = 0;
        string ans = "";
        ans.push_back(s[0]);
        for(int i = 1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                counter++;
                if(counter < 2){
                    ans.push_back(s[i]);    
                }
            }else{
                counter = 0;
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};