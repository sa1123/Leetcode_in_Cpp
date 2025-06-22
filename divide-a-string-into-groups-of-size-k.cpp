// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/submissions/1672917190/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int j = 0;
        string temp;
        for(int i = 0; i<s.size(); i++){
            if(i % k == 0 && i != 0){
                ans.push_back(temp);
                temp = "";
            }
            temp += s[i];
        }
        
        if(temp.size() && temp.size() != k){
            while(temp.size() != k){
                temp += fill;
            }
        }

        ans.push_back(temp);

        return ans;
    }
};