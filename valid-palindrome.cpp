//https://leetcode.com/problems/valid-palindrome/submissions/948858283/

class Solution {
public:
    bool isPalindrome(string s) {

        int end = s.size()-1;
        int start = 0;
        
        while(start<end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start++]) != tolower(s[end--])){
                return false;
            }
        }

        return true;
    }
};