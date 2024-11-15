// https://leetcode.com/problems/maximum-69-number/submissions/1453335129/

class Solution {
public:
    int maximum69Number (int num) {
        string sofn = to_string(num);
        for(int i = 0; i<sofn.size(); i++){
            if(sofn[i] == 54){
                sofn[i] = 57;
                break;
            }
        }
        return stoi(sofn);
    }
};