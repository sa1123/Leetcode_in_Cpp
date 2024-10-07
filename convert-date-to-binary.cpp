// https://leetcode.com/problems/convert-date-to-binary/submissions/1415030932/

class Solution {
public:

    std::string deciToBin(int x){
        std::string bin = "";
        while(x > 0){
            bin.insert(0, to_string(x%2));
            x/=2;
        }
        return bin;
    }

    string convertDateToBinary(string date) {
        std::string syear = date.substr(0,4);
        std::string smonth = date.substr(5,6);
        std::string sday = date.substr(8,9);
        int year = stoi(syear);
        int month = stoi(smonth);
        int day = stoi(sday);

        std::string ans = "";
        ans = deciToBin(year) + "-" + deciToBin(month) + "-" + deciToBin(day);
        
        return ans;
    }
};