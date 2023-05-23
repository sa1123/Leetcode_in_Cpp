//https://leetcode.com/problems/length-of-last-word/submissions/955615098/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int prev_count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 32){
                if(count){
                    prev_count = count;
                }
                count = 0;
            }else{
                count++;
            }
        }
        if(count){
            return count;
        }else{
            return prev_count;
        }
    }
};