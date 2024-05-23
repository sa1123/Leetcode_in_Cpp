// https://leetcode.com/problems/powx-n/submissions/953245702/

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};

// https://leetcode.com/problems/powx-n/submissions/1265633053/

// Recursive solution

class Solution {
public:
    double recPow(double x, long int n){
        if(n < 1){
            return 1;
        }else{
            if(n%2 == 0){
                return recPow(x*x, n/2);
            }else{
                return x * recPow(x, n-1);
            }
        }
    }

    double myPow(double x, int n) {
        double ans;
        if(n == 0){
            return 1;
        }else{
            long int ln = n;
            if(n>0){
                ans = recPow(x, ln);
            }else{
                ans = 1/recPow(x, -ln);
            }
        }
        return ans;
    }
};