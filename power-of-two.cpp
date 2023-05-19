// https://leetcode.com/problems/power-of-two/submissions/953142076/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }
        return(log10(n)/log10(2) == ceil(log10(n)/log10(2)));
    }
};