//https://leetcode.com/problems/top-k-frequent-elements/submissions/1242480869/

//Make a map to log frequency of each digit
//Make a queue to rearrange the map in ascending order
//Fill ans vector with 'k' number of elements from the top of the queue

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> freq;
        for(auto it: nums){
            freq[it]++;
        }

        priority_queue<pair<int, int>> p_q;
        for(auto [a,b]: freq){
            p_q.push({b,a});
        }
        
        vector<int> ans;
        while(k){
            ans.push_back(p_q.top().second);
            p_q.pop();
            k--;
        }

        return ans;
    }
};