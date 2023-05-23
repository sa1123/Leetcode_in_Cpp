//https://leetcode.com/problems/plus-one/submissions/955603901/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 1;
        for(int i = digits.size()-1; i>=0; i--){
            if(digits[i] == 9 && flag){
                digits[i] = 0;
                if(!flag){
                    flag++;
                }
            }else{
                digits[i]+=flag;
                if(flag){
                    flag--;
                }
            }
        }
        if(flag){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};