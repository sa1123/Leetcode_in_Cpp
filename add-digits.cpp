// https://leetcode.com/problems/add-digits/submissions/961776286/

class Solution {
public:
    int addDigits(int num) {
        // cout<<num<<endl;
        if(num < 10){
            return num;
        }else{
            int sum;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            if(sum < 10){
                return sum;
            }else{
                return addDigits(sum);
            }
        }
    }
};