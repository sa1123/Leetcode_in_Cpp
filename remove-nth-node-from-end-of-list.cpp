//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/953959953/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        struct ListNode* node = head;
        while(node!=NULL){
            count++;
            node = node->next;
        }
        if(count == 1 && n == 1){
            return NULL;
        }
        if(count == n){
            return head->next;
        }
        node = head;
        while(count-n-1>0){
            node=node->next;
            count--;
        }
        if(n==1){
            node->next = NULL;
        }else{
            node->next = node->next->next;
        }
        return head;
    }
};