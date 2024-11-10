// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/1448455859/

class Solution {
public:
    int addDigits(int num) {
        if(num < 10){
            return num;
        }else{
            int sum = 0;
            while(num){
                sum+=num%10;
                num/=10;
            }
            return sum;
        }
    }

    int mulDigits(int num) {
        if(num < 10){
            return num;
        }else{
            int sum = 1;
            while(num){
                sum*=num%10;
                num/=10;
            }
            return sum;
        }
    }

    int subtractProductAndSum(int n) {
        return(mulDigits(n) - addDigits(n));
    }
};