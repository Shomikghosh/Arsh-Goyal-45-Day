class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prev=NULL;
        ListNode *head=NULL;
        int carry=0;
        while(l1||l2){
            int val1=l1?l1->val:0;
            int val2=l2?l2->val:0;
            int tot=val1+val2+carry;
            carry=tot/10;
            tot=tot%10;
            ListNode *curr=new ListNode(tot);
            if(!head) head=curr;
            if(prev) prev->next=curr;
            prev=curr;
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        if(carry)
        {
            ListNode *last=new ListNode(carry);
            prev->next=last;
        }
        return head;
    }
};