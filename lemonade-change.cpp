//https://leetcode.com/problems/lemonade-change/submissions/976271606/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int it:bills){
            if(it == 5){
                five++;
            }else if(it == 10){
                if(five){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else{
                if(ten && five){
                    ten--;
                    five--;
                }else if(five>=3){
                    five-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};