class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int i=0,j=0;
        ListNode* tempi=head;
        ListNode* tempj=head;
        while(tempj)
        {
            if(tempi->val==tempj->val)
                tempj=tempj->next;
            else
            {
                tempi->next=tempj;
                tempi=tempj;
            }
        }
        if(tempi!=NULL)
        tempi->next=NULL;
        return head;
    }
};