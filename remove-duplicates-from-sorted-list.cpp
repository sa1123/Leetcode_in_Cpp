//https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/955721954/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return head;
        }
        struct ListNode* ptr = head;
        while(ptr && ptr->next){
            if(ptr->val == ptr->next->val){
                struct ListNode* ptr2 = ptr->next;
                while(ptr2 && (ptr2->val == ptr->val)){
                    ptr2 = ptr2->next;
                }
                ptr->next = ptr2;
            }
            ptr = ptr->next;
        }
        return head;
    }
};