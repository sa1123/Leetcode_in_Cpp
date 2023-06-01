//https://leetcode.com/problems/ugly-number/submissions/961838224/

class Solution {
public:
    bool isUgly(int n) {
        if(n==0){
            return false;
        }
        while(n%2 == 0){
            n/=2;
        }
        while(n%3 == 0){
            n/=3;
        }
        while(n%5 == 0){
            n/=5;
        }
        if(n==1){
            return true;
        }else{
            return false;
        }
    }
};

//https://leetcode.com/problems/ugly-number/submissions/961840646/ Recursive

class Solution {
public:
    bool isUgly(int n) {
        if(n==0){
            return false;
        }else if(n==1){
            return true;
        }else if(n%2 == 0){
           return isUgly(n/=2);
        }else if(n%3 == 0){
            return isUgly(n/=3);
        }else if(n%5 == 0){
            return isUgly(n/=5);
        }else{
            return false;
        }
    }
};