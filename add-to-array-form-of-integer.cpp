//https://leetcode.com/problems/add-to-array-form-of-integer/submissions/955787664/

class Solution {
public:

    int numberOfDigits(int k){
        if(k<=0){
            return 0;
        }else{
            return 1+numberOfDigits(k/10);
        }
    }

    vector<int> addToArrayForm(vector<int>& num, int k) {
        int digits = numberOfDigits(k);
        while(digits>num.size()){
            num.insert(num.begin(), 0);
        }

        int carry = 0;
        
        while(k){for(int i=num.size()-1; i>=0; i--){
            num[i] = num[i]+(k%10)+carry;
            k/=10;
            if(num[i] > 9){
                carry = 1;
                num[i] = num[i]%10;
            }else{
                carry = 0;
            }
        }}

        if(carry){
            num.insert(num.begin(), 1);
        }

        return num;
    }
};