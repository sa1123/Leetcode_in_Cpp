//https://leetcode.com/problems/palindrome-number/submissions/948302498/

class Solution {
public:

    int reverse(int x){
        int out = 0;
        while(x!=0 && out<(INT_MAX)/10 && out>(INT_MIN)/10){
            (out*=10)+=(x%10);
            x/=10;
        }
        return out;
    }

    bool isPalindrome(int x) {
        if(x<0 || x!=reverse(x)){
            return false;
        }
        return true;
    }
};