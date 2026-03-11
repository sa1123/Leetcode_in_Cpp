// https://leetcode.com/problems/complement-of-base-10-integer/submissions/1944591541/

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }
        int ans = 0;
        int i = 0;
        while(n){
            ans += pow(2,i) * (!(n%2));
            n /= 2;
            i++;
        }

        return ans;
    }
};