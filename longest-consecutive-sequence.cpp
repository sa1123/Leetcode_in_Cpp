//https://leetcode.com/problems/longest-consecutive-sequence/submissions/970895267/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int ans = 0;

        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        for(auto i=st.begin(); i!=st.end(); i++){
            if(st.find(*i-1) == st.end()){
                int count = 1;
                int x = *i;
                while(st.find(x+1) != st.end()){
                    x++;
                    count++;
                }
                ans = fmax(ans, count);
            }
        }

        return ans;
    }
};