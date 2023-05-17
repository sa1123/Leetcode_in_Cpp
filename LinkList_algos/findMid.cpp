struct ListNode* findMid(struct ListNode* start){
    struct ListNode* slow = start;
    struct ListNode* fast = start;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return(slow);
}