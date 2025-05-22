// https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/1641062647/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = 0;
        int b = 0;
        vector<int> comb;
        while(a < nums1.size() && b < nums2.size()){
            if(nums1[a] == nums2[b]){
                comb.push_back(nums1[a]);
                comb.push_back(nums2[b]);
                a++;
                b++;
                continue;
            }
            if(nums1[a] > nums2[b]){
                comb.push_back(nums2[b]);
                b++;
                continue;
            }
            if(nums1[a] < nums2[b]){
                comb.push_back(nums1[a]);
                a++;
                continue;
            }
        }
        if(a < nums1.size()){
            while(a < nums1.size()){
                comb.push_back(nums1[a]);
                a++;
            }
        }
        if(b < nums2.size()){
            while(b < nums2.size()){
                comb.push_back(nums2[b]);
                b++;
            }
        }
        int size = comb.size();
        if(size%2 == 0){
            return (double) (comb[(size-1)/2]+comb[size/2])/2;
        }else{
            return comb[(size-1)/2];
        }
    }
};