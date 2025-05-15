// https://leetcode.com/problems/sort-the-people/submissions/1634381944/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> pairs;
        for(int i = 0; i<names.size(); i++){
            pairs.push_back({heights[i], names[i]});
        }
        sort(pairs.begin(), pairs.end());
        reverse(pairs.begin(), pairs.end());
        for(int i = 0; i<names.size(); i++){
            names[i] = pairs[i].second;
        }
        return names;
    }
};