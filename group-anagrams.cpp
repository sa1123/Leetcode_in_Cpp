//https://leetcode.com/problems/group-anagrams/submissions/1242237786/

//Solution: Create map which stores key-value pairs. Keys are sorted words (type:string), values are unsorted anagrams (type:vector of strings).

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        map<string, vector<string>> mp;

        //Generate keys by sorting 
        for(int i=0; i<strs.size(); i++){
            string sorted_word = strs[i];
            sort(sorted_word.begin(), sorted_word.end()); //word is sorted
            mp[sorted_word].push_back(strs[i]); //unsorted word is pushed in at the key; key is created simultaneously if it isn't present
        }

        //Insert all the value vectors into ans vector
        for(auto mpt: mp){
            ans.push_back(mpt.second);
        }
        
        return ans;
    }
};