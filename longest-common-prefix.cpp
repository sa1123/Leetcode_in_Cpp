// https://leetcode.com/problems/longest-common-prefix/submissions/1558125923/

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if(strs.size() == 0){
                return "";
            }
            
            if(strs.size() == 1){
                return strs[0];
            }
            
            sort(strs.begin(), strs.end());
    
            string ans = "";
            int i = 0;
            while(i<fmin(strs[0].size(),strs[strs.size()-1].size())){
                if(strs[0][i] == strs[strs.size()-1][i]){
                    ans += strs[0][i];
                    i++;
                }else{
                    return ans;
                }
            }
            return ans;
        }
    };