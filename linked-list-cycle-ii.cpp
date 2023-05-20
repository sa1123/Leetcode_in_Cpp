//https://leetcode.com/problems/linked-list-cycle-ii/submissions/953932132/

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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return head;
        }

        struct ListNode *slow = head;
        struct ListNode *fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                struct ListNode *ans = head;
                while(slow != ans){
                    slow = slow->next;
                    ans = ans->next;
                }
                return ans;
            }
        }
        return NULL;
    }
};