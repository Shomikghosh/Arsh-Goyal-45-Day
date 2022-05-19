class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp1=new ListNode(-1);
        ListNode *temp2=new ListNode(-1);
        
        ListNode *tempa=temp1;
        ListNode *tempb=temp2;
        
        while(head){
            if(head->val<x)
            {
                temp1->next=new ListNode(head->val);
                temp1=temp1->next;
            }else{
                temp2->next=new ListNode(head->val);
                temp2=temp2->next;
            }
            head=head->next;
        }
        temp1->next=tempb->next;
        return tempa->next;
    }
};