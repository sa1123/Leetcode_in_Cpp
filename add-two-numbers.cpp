// https://leetcode.com/problems/add-two-numbers/submissions/1260437476/

// Convert LLs to queues and add queue.front() of both into the nodes of larger LL. Use int to check carry. If carry remains after the queues are empty, append a new node at the end with value 1.

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

    ListNode* addQueuesIntoLL(ListNode* l, std::queue<int> lrg, std::queue<int> sml){
        int carry = 0;
        struct ListNode* temp = l;
        while(sml.size()){
            temp->val = lrg.front() + sml.front() + carry;
            if(temp->val > 9){
                temp->val = (temp->val)%10;
                carry = 1;
            }else{
                carry = 0;
            }
            temp = temp->next;
            lrg.pop();
            sml.pop();
        }

        while(lrg.size()){
            temp->val = lrg.front() + carry;
            if(temp->val > 9){
                temp->val = (temp->val)%10;
                carry = 1;
            }else{
                carry = 0;
            }
            temp = temp->next;
            lrg.pop();
        }

        if(carry){
            temp = l;
            while(temp->next){
                temp = temp->next;
            }
            struct ListNode* newNode = new ListNode(1);
            temp->next = newNode;
            newNode->next = NULL;
        }

        return l;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::queue<int> queue1;
        struct ListNode* ptr;
        ptr = l1;
        while(ptr){
            queue1.push(ptr->val);
            ptr = ptr->next;
        }

        std::queue<int> queue2;
        ptr = l2;
        while(ptr){
            queue2.push(ptr->val);
            ptr = ptr->next;
        }

        if(queue1.size() >= queue2.size()){
            return(addQueuesIntoLL(l1, queue1, queue2));
        }else{
            return(addQueuesIntoLL(l2, queue2, queue1));
        }

        return NULL;
    }
};