//https://leetcode.com/problems/find-the-difference/submissions/963477855/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = t[t.length()-1];
        for(int i=0; i<s.length(); i++){
            ans = ans + t[i] - s[i];
        }
        return ans;
    }
};