// https://leetcode.com/problems/set-matrix-zeroes/submissions/1558050438/

class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int row[matrix.size()];
            int column[matrix[0].size()];
            for(int i = 0; i<matrix.size(); i++){
                row[i] = 1;
            }
            for(int i = 0; i<matrix[0].size(); i++){
                column[i] = 1;
            }
    
            for(int i = 0; i<matrix.size(); i++){
                for(int j = 0; j<matrix[0].size(); j++){
                    if(matrix[i][j] == 0){
                        row[i] = 0;
                        column[j] = 0;
                    }
                }
            }
    
            for(int i = 0; i<matrix.size(); i++){
                for(int j = 0; j<matrix[0].size(); j++){
                    if(row[i] == 0 || column[j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    };