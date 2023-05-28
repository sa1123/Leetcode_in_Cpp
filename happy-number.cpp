//https://leetcode.com/problems/happy-number/submissions/958819940/

class Solution {
public:
    bool isHappy(int n) {
        map<int, int> mp;
        while(n != 1){
            if(mp[n] == 0){
                mp[n]++;
            }else{
                return false;
            }
            int sq_sum = 0;
            while(n > 0){
                sq_sum += pow(n%10,2);
                n/=10;
            }
            n = sq_sum;
        }
        return true;
    }
};