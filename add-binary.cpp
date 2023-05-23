//https://leetcode.com/problems/add-binary/submissions/955760869/

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;

        while(a.length() > b.length()){
            b = "0" + b;
        }
        while(a.length() < b.length()){
            a = "0" + a;
        }
                
        for(int i=a.length()-1; i>=0; i--){
            if(a[i] == 49 && b[i] == 49){
                if(!carry){
                    a[i] = 48;
                    carry = 1;
                }
            }else if((a[i] == 48 && b[i] == 49) || (a[i] == 49 && b[i] == 48)){
                if(carry){
                    a[i] = 48;
                }else{
                    a[i] = 49;
                }
            }else{
                if(carry){
                    a[i] = 49;
                    carry = 0;
                }else{
                    a[i] = 48;
                }
            }
        }
        if(carry){
            a = "1" + a;
        }
    
        return a;
    }
};