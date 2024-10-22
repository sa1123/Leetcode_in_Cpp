// https://leetcode.com/problems/find-the-key-of-the-numbers/submissions/1430202505/

class Solution {
public:

    vector<int> vectorize(string ip){
        vector<int> op;
        for(int i = 0; i < ip.length(); i++){
            op.push_back(int(ip[i])-48);
        }
        while(op.size()<4){
            op.insert(op.begin(),0);
        }
        return op;
    }

    int generateKey(int num1, int num2, int num3) {
        vector<int> n1 = vectorize(to_string(num1));
        vector<int> n2 = vectorize(to_string(num2));
        vector<int> n3 = vectorize(to_string(num3));

        int ans = 0;

        for(int i = 0; i<4; i++){
            ans = ans + min(n1[i], min(n2[i], n3[i])) * int(pow(10,3-i));
        }

        return ans;
    }
};