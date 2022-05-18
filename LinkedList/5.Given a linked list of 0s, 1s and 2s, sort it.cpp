class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int count0=0;
        int count1=0;
        int count2=0;
        Node * temp=head;
        while(temp){
            if(temp->data==0)
                count0++;
            else if(temp->data==1)
                count1++;
            else
                count2++;
            temp=temp->next;
        }
        temp=head;
        while(temp)
        {
            if(count0)
            {
                temp->data=0;
                count0--;
            }else if(count1)
            {
                temp->data=1;
                count1--;
            }else{
                temp->data=2;
                count2--;
            }
            temp=temp->next;
        }
        return head;
    }
};