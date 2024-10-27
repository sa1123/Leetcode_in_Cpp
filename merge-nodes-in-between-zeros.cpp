// https://leetcode.com/problems/merge-nodes-in-between-zeros/submissions/1435122780/

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

            ptr2->next = ptr1;
            ptr2 = ptr1;
            ptr1 = ptr1->next;
        }

        ptr1 = head;
        while(ptr1->next->next != NULL){
            ptr1 = ptr1->next;
        }

        ptr1->next = NULL;

        return head;
    }
};