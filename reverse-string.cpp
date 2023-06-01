//https://leetcode.com/problems/reverse-string/submissions/961901057/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0, r=s.size()-1;
        while(l<r){
            int temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
    }
};