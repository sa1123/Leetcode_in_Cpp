// https://leetcode.com/problems/sum-of-number-and-its-reverse/submissions/1645047228/

class Solution {
private:
    int reverse(int n){
        int ans = n%10;
        n/=10;
        while(n){
            ans = ans*10 + n%10;
            n/=10;
        }
        return ans;
    }
public:
    bool sumOfNumberAndReverse(int num) {
        if(num == 0){
            return true;
        }
        // i = num/2 because single digit calcs are wasted (due to leading zero not existing)
        for(int i = num/2; i<num; i++){ 
            if(i + reverse(i) == num){
                return true;
            }
        }
        return false;
    }
};