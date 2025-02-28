// https://leetcode.com/problems/compare-version-numbers/submissions/1557940556/

class Solution {
    public:
        int compareVersion(string version1, string version2) {
            vector<int> v1;
            vector<int> v2;
            string curr = "";
    
            int v1dots = 0;
            for(int i = 0; i<version1.size(); i++){
                if(version1[i] == 46){
                    v1dots++;
                }
            }
    
            int v2dots = 0;
            for(int i = 0; i<version2.size(); i++){
                if(version2[i] == 46){
                    v2dots++;
                }
            }
    
            if(v1dots > v2dots){
                while(v1dots > v2dots){
                    version2 += ".0";
                    v2dots++;
                }
            }
    
            if(v1dots < v2dots){
                while(v1dots < v2dots){
                    version1 += ".0";
                    v1dots++;
                }
            }
    
            for(int i = 0; i<version1.size(); i++){
                if(isdigit(version1[i])){
                    curr += version1[i];
                }else{
                    v1.push_back(stoi(curr));
                    curr = "";
                }
            }
            v1.push_back(stoi(curr));
            curr = "";
    
            for(int i = 0; i<version2.size(); i++){
                if(isdigit(version2[i])){
                    curr += version2[i];
                }else{
                    v2.push_back(stoi(curr));
                    curr = "";
                }
            }
            v2.push_back(stoi(curr));
    
            for(int i = 0; i<v1.size(); i++){
                if(v1[i] > v2[i]){
                    return 1;
                }
                if(v1[i] < v2[i]){
                    return -1;
                }
            }
    
            return 0;
        }
    };