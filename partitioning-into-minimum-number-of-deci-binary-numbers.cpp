// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/submissions/1555968510/

class Solution {
    public:
        int minPartitions(string n) {
            int ans = 0;
            for(int i = 0; i<n.size(); i++){
                ans = max(ans, n[i]-48);
                if(ans == 9){
                    return ans;
                }
            }
            return ans;
        }
    };