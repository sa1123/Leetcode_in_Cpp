//https://leetcode.com/problems/counting-bits/submissions/955832138/

class Solution {
public:
    int numberOfOnes(int n){
        int count = 0;
        while(n>0){
            if(n%2 != 0){
                count++;
            }
            n/=2;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            ans.push_back(numberOfOnes(i));
        }
        return ans;
    }
};