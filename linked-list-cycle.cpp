//https://leetcode.com/problems/linked-list-cycle/submissions/951984419/

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
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }

        struct ListNode *two = head;

        while(two != NULL && two->next != NULL){
            head = head->next;
            two = two->next->next;
            if(head == two){
                return true;
            }
        }

        return false;
    }
};