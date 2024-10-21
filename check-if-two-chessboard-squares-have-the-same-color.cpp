// https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/submissions/1429080303/

class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        if(coordinate1[0]%2 == coordinate1[1]%2 && coordinate2[0]%2 == coordinate2[1]%2 || coordinate1[0]%2 != coordinate1[1]%2 && coordinate2[0]%2 != coordinate2[1]%2){
            return true;
        }else{
            return false;
        }
    }
};