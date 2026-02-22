// https://leetcode.com/problems/binary-gap/submissions/1927364046/

class Solution {
public:
    int binaryGap(int n) {
        int curr = 1;
        int mx = 1;
        while(n%2 == 0){
            n/=2;
        }
        if(n == 1){
            return 0;
        }
        while(n > 1){
            if(n%2 == 1){
                // mx = max(mx, curr);
                curr = 1;
            }else{
                curr++;
                mx = max(mx, curr);
            }
            n/=2;
        }
        return mx;
    }
};