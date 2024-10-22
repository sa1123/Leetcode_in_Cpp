// https://leetcode.com/problems/find-the-key-of-the-numbers/submissions/1430211456/

class Solution {
public:

    string padder(string str){
         while(str.size() < 4){
            str.insert(str.begin(), 48);
        }
        return str;
    }

    int generateKey(int num1, int num2, int num3) {
        string n1 = padder(to_string(num1));
        string n2 = padder(to_string(num2));
        string n3 = padder(to_string(num3));
        
        int ans = 0;

        for(int i = 0; i<4; i++){
            ans = ans + min(int(n1[i]-48), min(int(n2[i]-48), int(n3[i]-48))) * int(pow(10,3-i));
        }

        return ans;
    }
};