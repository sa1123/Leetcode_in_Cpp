//https://leetcode.com/problems/valid-anagram/submissions/956392126/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto i:mp){
            if(i.second){
                return false;
            }
        }

        return true;
    }
};