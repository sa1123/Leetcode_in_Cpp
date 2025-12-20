// https://leetcode.com/problems/delete-columns-to-make-sorted/submissions/1860429451/

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;

        for(int i = 0; i < strs[0].size(); i++){
            int prev = -1;
            for(int j = 0; j < strs.size(); j++){
                if(int(strs[j][i]) < prev){
                    ans++;
                    break;
                }else{
                    prev = int(strs[j][i]);
                }
            }
        }
        
        return ans;
    }
};