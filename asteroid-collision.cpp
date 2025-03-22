// https://leetcode.com/problems/asteroid-collision/submissions/1582202924/

class Solution {
    public:
        vector<int> asteroidCollision(vector<int>& asteroids) {
            vector<int> ans;
            for(int i = 0; i<asteroids.size(); i++){
                if(asteroids[i] > 0){
                    ans.push_back(asteroids[i]);
                }else{
                    if(ans.size() == 0 || ans.back() < 0){
                        ans.push_back(asteroids[i]);
                    }else{
                        int initial_size = ans.size();
                        int temp = ans.size();
                        while(temp){
                            if(temp < initial_size && ans.back()<0){
                                ans.push_back(asteroids[i]);
                                temp = 0;
                            }else if(asteroids[i]*-1 > ans.back()){
                                ans.pop_back();
                                if(ans.size() == 0){
                                    ans.push_back(asteroids[i]);
                                }
                                temp--;
                            }else if(asteroids[i]*-1 == ans.back()){
                                ans.pop_back();
                                temp = 0;
                            }else{
                                temp = 0;
                            }
                        }
                    }
                }
            }
            return ans;
        }
    };