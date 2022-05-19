class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head||!head->next||!head->next->next)
            return;
        
        ListNode *pen=head;
        while(pen->next->next)
            pen=pen->next;
        
        pen->next->next=head->next;
        head->next=pen->next;
        
        pen->next=NULL;
        
        reorderList(head->next->next);
    }
};