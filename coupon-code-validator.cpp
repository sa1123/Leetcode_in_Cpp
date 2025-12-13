// https://leetcode.com/problems/coupon-code-validator/submissions/1854337584/

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> ans;
        vector<string> electronics;
        vector<string> grocery;
        vector<string> pharmacy;
        vector<string> restaurant;
        for(int i = 0; i<code.size(); i++){
            bool flag = false;
            if(code[i].size() > 0 && isActive[i] == true && (businessLine[i] == "electronics" || businessLine[i] == "grocery" || businessLine[i] == "pharmacy" || businessLine[i] == "restaurant")){
                for(int j = 0; j<code[i].size(); j++){
                    if(isalnum(code[i][j]) == 0 && code[i][j] != 95){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    if(businessLine[i] == "electronics"){
                        electronics.push_back(code[i]);
                    }
                    if(businessLine[i] == "grocery"){
                        grocery.push_back(code[i]);
                    }
                    if(businessLine[i] == "pharmacy"){
                        pharmacy.push_back(code[i]);
                    }
                    if(businessLine[i] == "restaurant"){
                        restaurant.push_back(code[i]);
                    }
                }
            }
        }
        if(electronics.size()){
            sort(electronics.begin(), electronics.end());
            for(int i = 0; i<electronics.size(); i++){
                ans.push_back(electronics[i]);
            }
        }
        if(grocery.size()){
            sort(grocery.begin(), grocery.end());
            for(int i = 0; i<grocery.size(); i++){
                ans.push_back(grocery[i]);
            }
        }
        if(pharmacy.size()){
            sort(pharmacy.begin(), pharmacy.end());
            for(int i = 0; i<pharmacy.size(); i++){
                ans.push_back(pharmacy[i]);
            }
        }
        if(restaurant.size()){
            sort(restaurant.begin(), restaurant.end());
            for(int i = 0; i<restaurant.size(); i++){
                ans.push_back(restaurant[i]);
            }
        }
        return ans;
    }
};