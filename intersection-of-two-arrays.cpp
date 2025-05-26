// https://leetcode.com/problems/intersection-of-two-arrays/submissions/1644698135/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int hash[1001];
        memset(hash, 0, sizeof(hash));
        int checked[1001];
        memset(checked, 0, sizeof(checked));
        vector<int> ans;
        for(int i = 0; i<nums1.size(); i++){
            if(checked[nums1[i]] > 0 || hash[nums1[i]] > 0){
                continue;
            }else{
                for(int j = 0; j<nums2.size(); j++){
                    if(nums1[i] == nums2[j]){
                        hash[nums1[i]]++;
                        checked[nums1[i]]++;
                    }
                }
            }
        }
        for(int i = 0; i<1001; i++){
            if(hash[i] > 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};