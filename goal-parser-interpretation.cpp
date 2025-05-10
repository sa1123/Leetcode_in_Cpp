// https://leetcode.com/problems/goal-parser-interpretation/submissions/1629826685/

class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0; i<command.size(); i++){
            if(command[i] == 71){
                ans.append("G");
            }
            if(command[i] == 40 && command[i+1] == 41){
                ans.append("o");
                i++;
            }
            if(command[i] == 40 && command[i+1] == 97){
                ans.append("al");
                i+=3;
            }
        }
        return ans;
    }
};