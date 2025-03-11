// https://leetcode.com/problems/find-the-difference-of-two-arrays/submissions/1570046033/

class Solution {
    public:
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            vector<vector<int>> ans;
            for(int i = 0; i<nums1.size(); i++){
                for(int j = i+1; j<nums1.size(); j++){
                    if(nums1[i] == nums1[j]){
                        nums1.erase(nums1.begin() + j);
                        j--;
                    }
                }
            }
            for(int i = 0; i<nums2.size(); i++){
                for(int j = i+1; j<nums2.size(); j++){
                    if(nums2[i] == nums2[j]){
                        nums2.erase(nums2.begin() + j);
                        j--;
                    }
                }
            }
            for(int i = 0; i<nums1.size(); i++){
                for(int j = 0; j<nums2.size(); j++){
                    if(nums1[i] == nums2[j]){
                        nums2.erase(nums2.begin() + j);
                        nums1.erase(nums1.begin() + i);
                        i--;
                        break;
                    }
                }
            }
            ans.push_back(nums1);
            ans.push_back(nums2);
            return ans;
        }
    };