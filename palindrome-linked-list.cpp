//https://leetcode.com/problems/palindrome-linked-list/submissions/952008936/

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

    struct ListNode* findMid(struct ListNode* start){
        struct ListNode* slow = start;
        struct ListNode* fast = start;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return(slow);
    }

    struct ListNode* reverseLL(struct ListNode* start){
        struct ListNode* prev = NULL;
        struct ListNode* curr = start;
        while(curr!=NULL){
            struct ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    bool compareLLs(struct ListNode* first, struct ListNode* second){
        while(first!=NULL && second!=NULL){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }

        if(head->next->next == NULL){
            if(head->val == head->next->val){
                return true;
            } else {
                return false;
            }
        }

        return(compareLLs(reverseLL(findMid(head)), head));
    }
};