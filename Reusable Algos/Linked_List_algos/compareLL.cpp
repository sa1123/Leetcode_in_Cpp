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