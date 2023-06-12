//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/969566199/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnm = prices[0], p = 0;
        for(int i=1; i<prices.size(); i++){
            p = fmax(p, prices[i] - mnm);
            mnm = fmin(mnm, prices[i]);
        }
        return p;
    }
};