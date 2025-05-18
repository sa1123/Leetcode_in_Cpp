// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/submissions/1637078211/

class Solution {
private:
    bool isPalindrome(string s) {
        int end = s.size()-1;
        int start = 0;
        
        while(start<end){
            if(s[start] != s[end]){
                return false;
            }else{
                start++;
                end--;
            }
        }
        return true;
    }

public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i<words.size(); i++){
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};