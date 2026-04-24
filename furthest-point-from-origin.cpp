// https://leetcode.com/problems/furthest-point-from-origin/submissions/1986670810/

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l_count = 0;
        int r_count = 0;
        int u_count = 0;
        for(int i = 0; i<moves.size(); i++){
            if(moves[i] == 76){
                l_count++;
            }else if(moves[i] == 82){
                r_count++;
            }else{
                u_count++;
            }
        }
        return max(l_count, r_count) + u_count - min(l_count, r_count);
    }
};