// https://leetcode.com/problems/first-unique-character-in-a-string/submissions/1644685075/

class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26];
        memset(hash, 0, sizeof(hash));
        for(int i = 0; i<s.size(); i++){
            hash[s[i] - 97]++;
        }
        for(int i = 0; i<s.size(); i++){
            if(hash[s[i] - 97] == 1){
                return i;
            }
        }
        return -1;
    }
};