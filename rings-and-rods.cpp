// https://leetcode.com/problems/rings-and-rods/submissions/1457333920/

class Solution {
public:
    int countPoints(string rings) {
        int red[10] = {0,0,0,0,0,0,0,0,0,0};
        int blue[10] = {0,0,0,0,0,0,0,0,0,0};
        int green[10] = {0,0,0,0,0,0,0,0,0,0};

        for(int i = 0; i<rings.size(); i+=2){
            if(rings[i]+0 == 66){
                blue[rings[i+1]-48]++;
            }else if(rings[i]+0 == 71){
                green[rings[i+1]-48]++;
            }else{
                red[rings[i+1]-48]++;
            }
        }

        int ans = 0;

        for(int i = 0; i<10; i++){
            if(red[i] >= 1 && blue[i] >= 1 && green[i] >= 1){
                ans++;
            }
        }

        return ans;
    }
};