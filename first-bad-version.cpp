//https://leetcode.com/problems/first-bad-version/submissions/963469576/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        for(int i=n; i>0; i--){
            if(!isBadVersion(i)){
                return ++i;
            }
        }
        return 1;
    }
};