// https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1614533382/

string keypadmapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
class Solution {
private:
    void recLetterCombinations(string digits, int index, string current, vector<string>& ans){
        if(index >= digits.size()){
            ans.push_back(current);
            return;
        }
        
        for(int i = 0; i<keypadmapping[digits[index] - 48].size(); i++){
            current.push_back(keypadmapping[digits[index] - 48][i]);
            recLetterCombinations(digits, index+1, current, ans);
            current.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0){
            return ans;
        }
        int index = 0;
        string current;
        recLetterCombinations(digits, index, current, ans);
        return ans;
    }
};