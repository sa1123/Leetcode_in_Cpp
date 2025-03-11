// https://leetcode.com/problems/sort-characters-by-frequency/submissions/1570203165/

class Solution {
    public:
        string frequencySort(string s) {
            int count[128] = {0};
            for(int i = 0; i<s.size(); i++){
                count[s[i]]++;
            }
    
            int curr_max_val = 0;
            int curr_max_pos = -1;
            string ans = "";
    
            int while_cond = s.size();
            while(while_cond){
                for(int i = 0; i<128; i++){
                    if(count[i] > curr_max_val){
                        curr_max_pos = i;
                        curr_max_val = count[i];
                    }
                }
                for(int j = 0; j<curr_max_val; j++){
                    ans.push_back(curr_max_pos);
                    count[curr_max_pos]--;
                }
                while_cond -= curr_max_val;
                curr_max_val = 0;
                curr_max_pos = -1;
            }
    
            return ans;
        }
    };