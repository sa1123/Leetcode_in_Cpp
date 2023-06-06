//https://leetcode.com/problems/count-the-digits-that-divide-a-number/submissions/965418398/

class Solution {
public:
    int countDigits(int num) {
        int nb = num, ans = 0;
        while(num>0){
            if(nb%(num%10) == 0){
                ans++;
            }
            num/=10;
        }
        return ans;
    }
};