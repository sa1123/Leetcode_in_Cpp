// https://leetcode.com/problems/apple-redistribution-into-boxes/submissions/1864440785/

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());

        int sum = 0;
        for(int i = 0; i<apple.size(); i++){
            sum += apple[i];
        }

        int cap_sum = 0;
        for(int i = 0; i<capacity.size(); i++){
            cap_sum += capacity[i];
            if(cap_sum >= sum){
                return i+1;
            }
        }

        return 0;
    }
};