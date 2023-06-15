//https://leetcode.com/problems/merge-sorted-array/submissions/971701737/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums1.size() > nums2.size()){
            for(int i=m, j=0; i<nums1.size(); i++, j++){
                nums1[i] = nums2[j];
            }
        }else{
            for(int i=0, j=n; j<nums2.size(); i++, j++){
                nums2[j] = nums1[i];
            }
            nums1 = nums2;
        }
        sort(nums1.begin(), nums1.end());
    }
};