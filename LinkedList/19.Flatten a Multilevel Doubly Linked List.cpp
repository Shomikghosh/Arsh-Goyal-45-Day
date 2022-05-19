class Solution {
public:
    Node* flatten(Node* head) {
        Node * temp=head;
        while(head){
            if(!head->child)
                head=head->next;
            else{
                Node* temp=head->next;
                head->next=head->child;
                head->child->prev=head;
                Node* last=head->child;
                while(last->next){
                    last=last->next;
                }
                last->next=temp;
                if(temp)
                temp->prev=last;
                head->child=NULL;
                head=head->next;
            }
        }
        return temp;
    }
};