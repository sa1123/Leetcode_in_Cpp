//https://leetcode.com/problems/roman-to-integer/submissions/1259778482/

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(i+1<s.size()){
                if(s[i] == 'I'){
                    if(s[i+1] == 'V'){
                        ans += 4;
                        i++;
                        continue;
                    }else if(s[i+1] == 'X'){
                        ans += 9;
                        i++;
                        continue;
                    }else{
                        ans += 1;
                    }
                }
                if(s[i] == 'V'){
                    ans += 5;
                }
                if(s[i] == 'X'){
                    if(s[i+1] == 'L'){
                        ans += 40;
                        i++;
                        continue;
                    }else if(s[i+1] == 'C'){
                        ans += 90;
                        i++;
                        continue;
                    }else{
                        ans += 10;
                    }
                }
                if(s[i] == 'L'){
                    ans += 50;
                }
                if(s[i] == 'C'){
                    if(s[i+1] == 'D'){
                        ans += 400;
                        i++;
                        continue;
                    }else if(s[i+1] == 'M'){
                        ans += 900;
                        i++;
                        continue;
                    }else{
                        ans += 100;
                    }
                }
                if(s[i] == 'D'){
                    ans += 500;
                }
                if(s[i] == 'M'){
                    ans += 1000;
                }
            }else{
                if(s[i] == 'I'){
                    ans += 1;
                }else if(s[i] == 'V'){
                    ans += 5;
                }else if(s[i] == 'X'){
                    ans += 10;
                }else if(s[i] == 'L'){
                    ans += 50;
                }else if(s[i] == 'C'){
                    ans+= 100;
                }else if(s[i] == 'D'){
                    ans += 500;
                }else{
                    ans += 1000;
                }
            }
        }
        return ans;
    }
};