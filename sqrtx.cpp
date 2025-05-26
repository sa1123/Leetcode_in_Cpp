// https://leetcode.com/problems/sqrtx/submissions/1644704026/

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }
        for(long i = 0; i<(x/2)+2; i++){
            if(i*i == x){
                return i;
            }
            if(i*i > x){
                return i-1;
            }
        }
        return 1;
    }
};