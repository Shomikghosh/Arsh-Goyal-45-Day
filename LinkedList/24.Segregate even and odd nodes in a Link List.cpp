class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* even0=new Node(0);
        Node* odd0=new Node(0);
        
        Node* ans=even0;
        Node* temp=odd0;
        
        Node*curr=head;
        while(curr){
            if(curr->data%2==0){
                even0->next=curr;
                even0=even0->next;
            }else{
                odd0->next=curr;
                odd0=odd0->next;
            }
            curr=curr->next;
        }
        even0->next=temp->next;
        odd0->next=NULL;
        return ans->next;
    }
};