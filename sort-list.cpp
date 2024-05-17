// https://leetcode.com/problems/sort-list/submissions/1260321743/

// Convert LL to vector, sort it and convert it back to LL.

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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        struct ListNode* node = head;
        vector<int> arr;

        while(node != NULL){
            arr.push_back(node->val);
            node = node->next;
        }

        sort(arr.begin(), arr.end());

        int i = 0;
        node = head;

        while(node != NULL){
            node->val = arr[i];
            i++;
            node = node->next;
        }

        return head;
    }
};