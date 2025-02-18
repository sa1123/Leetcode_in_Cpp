// https://leetcode.com/problems/count-partitions-with-even-sum-difference/submissions/1547319714/

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ans = 0;
        int leftside = nums[0];
        int rightside = 0;
        int partition = 1;
        for(int i = 1; i<nums.size(); i++){
            rightside += nums[i];
        }

        while(partition < nums.size()){
            if((leftside % 2 == 0 && rightside % 2 == 0) || (leftside % 2 != 0 && rightside % 2 != 0)){
                ans++;
            }
            partition++;
            leftside+=nums[partition-1];
            rightside-=nums[partition-1];
        }
        return ans;
    }
};