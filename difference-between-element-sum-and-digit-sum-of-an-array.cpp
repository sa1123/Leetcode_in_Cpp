// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/submissions/1637958693/

class Solution {
private:
    int addDigits(int num){
        if(num < 10){
            return num;
        }else{
            int sum = 0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            return sum;
        }
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int abs = 0;
        int dig = 0;
        for(int i = 0; i<nums.size(); i++){
            abs += nums[i];
            dig += addDigits(nums[i]);
        }
        if(abs > dig){
            return abs - dig;
        }else{
            return dig - abs;
        }
        
    }
};