class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head&&head->val==val)
        {
            head=head->next;
        }
        ListNode * temp=head;
        while(temp){
            ListNode *contt=temp;
            contt=contt->next;
            while( contt&&contt->val==val)
            {
               contt=contt->next;
            }
            temp->next=contt;
            temp=temp->next;
        }
        return head;
    }
};