// https://leetcode.com/problems/odd-even-linked-list/submissions/1260287608/

// Find end point. Create odd and even pointers at the first and second node. Move even at the end. Use an integer to keep track of moves.

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return head;
        }
        
        int count = 1;
        struct ListNode* node = head;
        while(node->next!=NULL){
            count++;
            node = node->next;
        }

        struct ListNode* odd = head;
        struct ListNode* even = head->next;

        if(count%2 != 0){
            count--;
        }

        while(count){
            odd->next = even->next;
            odd = odd->next;
            count--;
            node->next = even;
            node->next->next = NULL;
            count--;
            node = node->next;
            even = odd->next;
        }

        return head;
    }
};