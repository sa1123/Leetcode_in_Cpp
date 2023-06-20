//https://leetcode.com/problems/find-smallest-letter-greater-than-target/submissions/975507766/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target == 122){
            return letters[0];
        }
        int ans = INT_MAX;
        for(auto it:letters){
            if(int(it) > int(target)){
                ans = fmin(ans, int(it));
                if(ans == target+1){
                    return ans;
                }
            }
        }
        if(ans == INT_MAX){
            return letters[0];
        }
        return ans;
    }
};