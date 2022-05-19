class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode *prev=NULL;
        ListNode *next=NULL;
        while(head)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* la=reverse(l1);
        ListNode *lb=reverse(l2);
        ListNode *prev=NULL;
        ListNode *head=NULL;
        int carry=0;
        while(la||lb)
        {
            int temp1=la?la->val:0;
            int temp2=lb?lb->val:0;
            int total=temp1+temp2+carry; 
            carry=total/10;
            total%=10;
            ListNode *temp=new ListNode(total);
           
            if(!head) head=temp;
            if(prev) prev->next=temp;
            prev=temp;
            la=la?la->next:NULL;
            lb=lb?lb->next:NULL;
        }
        if(carry){
            ListNode* f=new ListNode(carry);
            prev->next=f;
        }
        return reverse(head);
    }
};