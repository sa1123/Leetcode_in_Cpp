//https://leetcode.com/problems/prime-in-diagonal/submissions/964160392/

class Solution {
public:
    bool isPrime(int x){
        if(x<=1){
            return false;
        }
        for(int i=2; i<x/2+1; i++){
            if(x%i == 0){
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i][i] == ans || nums[i][nums.size()-i-1] == ans){
                continue;
            }
            if(isPrime(nums[i][i])){
                ans=max(ans, nums[i][i]);
            }
            if(isPrime(nums[i][nums.size()-i-1])){
                ans=max(ans, nums[i][nums.size()-i-1]);
            }
        }
        return ans;
    }
};