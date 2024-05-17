int lengthLL(struct ListNode* start){
    int len = 0;
    while(start != NULL){
        len++;
        start = start->next;
    }
    return len;
}