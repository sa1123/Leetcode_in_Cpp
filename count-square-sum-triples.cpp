// https://leetcode.com/problems/count-square-sum-triples/submissions/1850415418/

class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i = 1; i<=n-2; i++){
            for(int j = i+1; j<=n-1; j++){
                for(int k = i+2; k<=n; k++){
                    if(i*i + j*j == k*k){
                        count++;
                    }
                }
            }
        }
        return count * 2;
    }
};