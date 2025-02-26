// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/submissions/1555905844/

class Solution {
    public:
        vector<int> minOperations(string boxes) {
            vector<int> answer(boxes.size(), 0);
            for(int i = 0; i<boxes.size(); i++){
                for(int j = 0; j<i; j++){    
                    answer[i] = answer[i] + ((boxes[j]-48) * (i - j));
                }
                for(int k = i+1; k<boxes.size(); k++){
                    answer[i] = answer[i] + ((boxes[k]-48) * (k - i));
                }
            }
            return answer; 
        }
    };