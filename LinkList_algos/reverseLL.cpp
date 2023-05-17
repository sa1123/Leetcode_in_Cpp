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