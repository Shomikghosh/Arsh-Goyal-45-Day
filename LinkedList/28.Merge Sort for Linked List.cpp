class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* merge(Node *l1,Node *l2)
    {
        Node *dummy=new Node(0);
        Node *curr=dummy;
        while(l1&&l2){
            if(l1->data<l2->data)
            {
                dummy->next=l1;
                l1=l1->next;
            }else{
                dummy->next=l2;
                l2=l2->next;
            }
            dummy=dummy->next;
        }
        if(l1){
            dummy->next=l1;
        }
        if(l2){
            dummy->next=l2;
        }
        return curr->next;
    }
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL||head->next==NULL)
            return head;
        Node* slow=head;
        Node* fast=head->next;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow->next=NULL;
        return merge(mergeSort(head),mergeSort(fast));
    }
};