// https://leetcode.com/problems/valid-perfect-square/submissions/963474432/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        for(int i=2; i<=num/2; i++){
            if(float(i) == float(num)/float(i)){
                return true;
            }
        }
        return false;
    }
};