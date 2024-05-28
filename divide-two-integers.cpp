// https://leetcode.com/problems/divide-two-integers/submissions/1270278001/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if(divisor == -1 || divisor == 1){
            return dividend*divisor;
        }
        unsigned int quot = 0;
        unsigned int absor = abs(divisor);
        unsigned int abend = abs(dividend);

        while(abend >= absor){
            abend -= absor;
            quot++;
        }

        if((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0)){
            return quot;
        }else{
            return quot*-1;
        }
    }
};