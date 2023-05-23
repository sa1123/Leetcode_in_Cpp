//https://leetcode.com/problems/add-strings/submissions/955799985/

class Solution {
public:
    string addStrings(string a, string b) {
        while(a.length() > b.length()){
            b = "0" + b;
        }
        while(a.length() < b.length()){
            a = "0" + a;
        }

        int carry = 0;

        for(int i=a.length()-1; i>=0; i--){
            a[i] = a[i] + b[i] + carry - 48;
            if(a[i] > 57){
                a[i] = (a[i]-48)%10 + 48;
                carry = 1;
            }else{
                carry = 0;
            }
        }

        if(carry){
            a = "1" + a;
        }

        return a;
    }
};