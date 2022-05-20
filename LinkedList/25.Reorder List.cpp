Node* reverse(Node* head){
    Node* current = head;
    Node* prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
    return prev;
}
void reorderList(Node* head) {
    // Your code here
    Node *fast=head->next;
    Node *slow=head;
    
    while(fast&&fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    
    Node* head1 = head;
    Node* head2 = slow->next;
    slow->next = NULL;
    
    head2=reverse(head2);
    
    Node *dummy=new Node(0);
    
    while(head1||head2){
        if(head1){
                  dummy->next = head1;
                  head1 = head1->next;
                  dummy = dummy->next;
          }
          if(head2){
              dummy->next = head2;
              head2 = head2->next;
              dummy = dummy->next;
          }
    }
             head = dummy->next;

}