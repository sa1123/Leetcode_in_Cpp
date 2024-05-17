// https://leetcode.com/problems/rotate-list/submissions/1260472462/

// Find size of LL. Move ptr to point of rotation (k nodes before end) and redirect nodes (end to head, pt of rot->next becomes new head, pt of rotation->next becomes null) to solve.

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        struct ListNode* end = head;
        int size = 1;
        while(end->next != NULL){
            size++;
            end = end->next;
        }

        k = k%size;
        if(k == 0){
            return head;
        }

        struct ListNode* rot = head;
        for(int i = 0; i<size-k-1; i++){
            rot = rot->next;
        }

        struct ListNode* start = rot->next;
        end->next = head;
        rot->next = NULL;

        return start;
    }
};