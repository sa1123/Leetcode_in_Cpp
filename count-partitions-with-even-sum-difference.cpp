// https://leetcode.com/problems/count-partitions-with-even-sum-difference/submissions/1547319714/

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];

        for(int i=1;i<=n-1;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int cnt=0;
        for(int i=0;i<=n-2;i++){
            int lastsum=prefix[n-1]-prefix[i];
            if(abs(prefix[i]-lastsum)%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};