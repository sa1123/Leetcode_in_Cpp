//https://leetcode.com/problems/plus-one/submissions/955606612/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 1;
        for(int i = digits.size()-1; i>=0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i]+=flag;
                return digits;
            }
        }
        if(flag){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};