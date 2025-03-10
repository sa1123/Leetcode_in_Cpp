// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/1569017895/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        int pairSum(ListNode* head) {
            vector<int> ll;
            struct ListNode* ptr = head;
            while(ptr){
                ll.push_back(ptr->val);
                ptr = ptr->next;
            }
            int ans = 0;
            for(int i = 0; i<ll.size()/2; i++){
                ans = max(ans, ll[i] + ll[ll.size()-1-i]);
            }
            return ans;
        }
    };