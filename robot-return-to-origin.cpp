// https://leetcode.com/problems/robot-return-to-origin/submissions/1986677407/

class Solution {
public:
    bool judgeCircle(string moves) {
        int h = 0;
        int v = 0;
        for(int i = 0; i<moves.size(); i++){
            if(moves[i] == 82){
                h++;
            }else if(moves[i] == 76){
                h--;
            }else if(moves[i] == 85){
                v++;
            }else if(moves[i] == 68){
                v--;
            }
        }
        if(h == 0 && v == 0){
            return true;
        }else{
            return false;
        }
    }
};