//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/955813260/

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.length(); i++){
            if(haystack[i] == needle[0]){
                int j=0;
                while(j+i<haystack.length() && j<needle.length()){
                    if(haystack[i+j] != needle[j]){
                        break;
                    }
                    j++;
                }
                if(j == needle.length()){
                    return i;
                }
            }
        }
        return -1;
    }
};