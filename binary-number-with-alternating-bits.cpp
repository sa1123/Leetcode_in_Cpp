// https://leetcode.com/problems/binary-number-with-alternating-bits/submissions/1926080182/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n <= 1){
            return true;
        }
        int curr = n%2;
        n/=2;

        while(n>=1){
            if(curr == n%2){
                return false;
            }else{
                curr = n%2;
                n/=2;
            }
        }

        return true;
    }
};