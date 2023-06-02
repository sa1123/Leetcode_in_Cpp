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

// https://leetcode.com/problems/power-of-two/submissions/953144696/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        // return(log10(n)/log10(2) == ceil(log10(n)/log10(2)));
        return ((n&(n-1)) == 0);
    }
};

// https://leetcode.com/problems/power-of-two/submissions/962120535/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }else if(n == 1){
            return true;
        }else if(n%2 == 0){
           return isPowerOfTwo(n/2);
        }else{
            return false;
        }
    }
};