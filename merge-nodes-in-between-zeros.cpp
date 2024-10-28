// https://leetcode.com/problems/merge-nodes-in-between-zeros/submissions/1436181984/

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ptr1 = head;
        ListNode *ptr2 = ptr1;
        ptr1 = ptr1->next;
        
        while(ptr1 != NULL){
            while(ptr1->val != 0){
                ptr2->val += ptr1->val;
                ptr1 = ptr1->next;
            }

            if(ptr1->next == NULL){
                ptr2->next = NULL;
                return head;
            }

            ptr2->next = ptr1;
            ptr2 = ptr1;
            ptr1 = ptr1->next;
        }
        
        return head;
    }
};