// https://leetcode.com/problems/snake-in-matrix/submissions/1357411641/

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int down = 0;
        int right = 0;
        for(int i = 0; i<commands.size(); i++){
            if(commands[i][0] == 82){ //Right
                right++;
            }else if(commands[i][0] == 76){ //Left
                right--;
            }else if(commands[i][0] == 68){ //Down
                down++;
            }else{ //Up
                down--;
            }
            // cout<<"down "<<down<<"\n";
            // cout<<"right "<<right<<"\n";
            // cout<<(right*n)+down<<"\n";
        }
        return (down*n)+right;
    }
};