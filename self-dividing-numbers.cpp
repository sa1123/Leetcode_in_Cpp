//https://leetcode.com/problems/self-dividing-numbers/submissions/966144245/

class Solution {
public:

    bool div(int x){
        int copy = x;
        while(x>0){
            if(x%10 == 0){
                return false;
            }else if(copy%(x%10) != 0){
                return false;
            }else{
                x/=10;
            }
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            if(div(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};