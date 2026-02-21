// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/submissions/1926046226/

class Solution {
public:
    int counter(int dec){
        int ans = 0;
        
        while(dec >= 1){
            if(dec%2 == 1){
                ans++;
            }
            dec/=2;
        }

        return ans;
    }

    int isPrime(int x){
         if(x<=1){
            return 0;
        }
        for(int i=2; i<x/2+1; i++){
            if(x%i == 0){
                return 0;
            }
        }
        return 1;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for(int i = left; i<=right; i++){
            ans += isPrime(counter(i));
        }

        return ans;
    }
};