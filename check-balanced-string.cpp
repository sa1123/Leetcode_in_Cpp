// https://leetcode.com/problems/check-balanced-string/submissions/1447463782/

class Solution {
public:
    bool isBalanced(string num) {
        int even_s = 0;
        int odd_s = 0;

        for(int i = 0; i<num.size(); i=i+2){
            even_s += int(num[i]-48);
        }

        for(int i = 1; i<num.size(); i=i+2){
            odd_s += int(num[i]-48);
        }

        return(odd_s == even_s);
    }
};