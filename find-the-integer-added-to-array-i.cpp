// https://leetcode.com/problems/find-the-integer-added-to-array-i/submissions/1269280777/

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        for(int i = 0; i<nums1.size(); i++){
            ans = ans + (nums2[i] - nums1[i]);
        }
        if(ans<0){
            return -1*(abs(ans)/nums1.size());
        }
        return ans/nums1.size();
    }
};