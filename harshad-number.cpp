// https://leetcode.com/problems/harshad-number/submissions/1453331776/

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int divisor = 0;
        int temp = x;
        while(temp){
            divisor += temp%10;
            temp /= 10;
        }
        if(x%divisor == 0){
            return divisor;
        }else{
            return -1;
        }
    }
};