void printLL(struct ListNode* start){
    while(start != NULL){
        printf("%d\t", start->val);
        start = start->next;
    }
}