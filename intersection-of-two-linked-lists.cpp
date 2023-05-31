//https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/960860752/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        struct ListNode* newA = headA;
    
        while(headB != NULL){
            while(newA != NULL){
                if(&newA->val == &headB->val){
                    return newA;
                }else{
                    newA = newA->next;
                }
            }
            headB = headB->next;
            newA = headA;
        }

        return NULL;
    }
};