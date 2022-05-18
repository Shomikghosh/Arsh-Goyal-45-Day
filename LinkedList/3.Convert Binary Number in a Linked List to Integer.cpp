class Solution {
public:
    int getDecimalValue(ListNode* head) {
         int len=-1;
        ListNode* temp=head;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        int dec_value=0;
        while(head)
        {
            dec_value+=head->val*pow(2,len);
            len--;
            head=head->next;
        }
        return dec_value;
    }
};