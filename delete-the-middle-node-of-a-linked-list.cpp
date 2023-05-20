//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/953969472/

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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return head->next;
        }
        struct ListNode* fast = head;
        struct ListNode* slow = head;
        struct ListNode* temp = head;

        while(fast->next && fast->next->next){
            fast = fast->next->next;
            temp = slow;
            slow = slow->next;
        }
        if(fast->next == NULL){
            temp->next = temp->next->next;
        }else{
            slow->next = slow->next->next;
        }
        return head;
    }
};