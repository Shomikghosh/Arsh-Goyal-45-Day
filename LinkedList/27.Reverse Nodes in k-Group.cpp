class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k==1)
            return head;
        
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr=dummy;
        ListNode * prev=dummy;
        ListNode *nex=dummy;
        
        int count=0;
        ListNode *temp=dummy;
        while(temp->next){
            temp=temp->next;
            count++;
        }
        
        while(count>=k){
            curr=prev->next;
            nex=curr->next;
            for(int i=1;i<k;i++){
                curr->next=nex->next;
                nex->next=prev->next;
                prev->next=nex;
                nex=curr->next;
            }
            prev=curr;
            count-=k;
        }
        return dummy->next;
    }
};