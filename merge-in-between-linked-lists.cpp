// https://leetcode.com/problems/merge-in-between-linked-lists/submissions/1567844156/

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
        ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
            struct ListNode *onb = list1;
            struct ListNode *ona = list1;
            while(b>-1){
                onb = onb->next;
                b--;
            }
            while(a>1){
                ona = ona->next;
                a--;
            }
            ona->next = list2;
            while(ona->next){
                ona = ona->next;
            }
            ona->next = onb;
            return list1;
        }
    };