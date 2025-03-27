// https://leetcode.com/problems/assign-cookies/submissions/1587828969/

class Solution {
    public:
        int findContentChildren(vector<int>& g, vector<int>& s) {
            int g_nav = 0;
            int s_nav = 0;
            sort(g.begin(), g.end());
            sort(s.begin(), s.end());
    
            while(g_nav < g.size() && s_nav < s.size()){
                if(s[s_nav] >= g[g_nav]){
                    g_nav++;
                    s_nav++;
                }else{
                    s_nav++;
                }
            }
            return g_nav;
        }
    };