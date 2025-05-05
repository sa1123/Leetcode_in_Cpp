// https://leetcode.com/problems/number-of-equivalent-domino-pairs/submissions/1626198207/

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int ans = 0;
            int arr[100];
            memset(arr, 0, sizeof(arr));
            
            for(int i = 0; i<dominoes.size(); i++){
                if(dominoes[i][0] > dominoes[i][1]){
                    arr[10*dominoes[i][0] + dominoes[i][1]]++;
                }else{
                    arr[dominoes[i][0] + 10*dominoes[i][1]]++;
                }
                
            }
    
            for(int i = 0; i<100; i++){
                if(arr[i] != 0){
                    ans += (arr[i]*(arr[i]-1))/2;
                }
            }
    
            return ans;
        }
    };