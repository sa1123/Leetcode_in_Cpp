//https://leetcode.com/problems/largest-odd-number-in-string/submissions/951594709/

class Solution {
public:
    string largestOddNumber(string num) { 
        for(int i=num.size()-1; i>=0; i--){
            if(num[i]%2){
                num.resize(i+1);
                return num;
            }
        }
        return "";
    }
};