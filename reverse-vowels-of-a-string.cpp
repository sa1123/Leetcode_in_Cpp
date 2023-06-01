//https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/961899206/

class Solution {
public:
    string reverseVowels(string s) {
        int l=0, r=s.length()-1;
        while(l<r){
            if(s[l] == 65 || s[l] == 69 || s[l] == 73 || s[l] == 79 || s[l] == 85 || s[l] == 97 || s[l] == 101 || s[l] == 105 || s[l] == 111 || s[l] == 117){
                if(s[r] == 65 || s[r] == 69 || s[r] == 73 || s[r] == 79 || s[r] == 85 || s[r] == 97 || s[r] == 101 || s[r] == 105 || s[r] == 111 || s[r] == 117){
                    int temp = s[l];
                    s[l] = s[r];
                    s[r] = temp;
                    l++;
                    r--;
                }else{
                    r--;
                }
            }else{
                l++;
            }
        }
        return s;
    }
};