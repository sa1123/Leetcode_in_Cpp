// https://leetcode.com/problems/find-lucky-integer-in-an-array/submissions/1686910652

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int map[502];
        for(int i = 0; i<arr.size(); i++){
            map[arr[i]]++;
        }
        int ans = -1;
        for(int i = 1; i<502; i++){
            if(i == map[i]){
                ans = i;
            }
        }
        return ans;
    }
};