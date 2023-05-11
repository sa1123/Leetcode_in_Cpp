//https://leetcode.com/problems/reverse-integer/submissions/948284040/

class Solution {
public:

    int len(int x){
        int out = 0;
        while(x!=0){
            x/=10;
            out++;
        }
        return out;
    }

    int reverse(int x) {

        int out = 0;
        int zero_flag = 0;

        while(x){
            while(!zero_flag){
                if(x%10 == 0){
                    x = x/10;
                }else{
                    zero_flag = 1;
                }
            }

            if(out + pow(10,len(x)-1)*(x%10) > INT_MAX || out + pow(10,len(x)-1)*(x%10) < INT_MIN){
                return 0;
            }

            out += pow(10,len(x)-1)*(x%10);
            x = x/10;
        }

        return out;
    }
};