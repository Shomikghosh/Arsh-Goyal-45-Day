class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode* headNode;
        ListNode* fin ;
        if(list1->val<=list2->val)
         { 
                headNode=list1;
                list1=list1->next;
         }
        else
        {
                headNode=list2;
                list2=list2->next;    
        }
        fin=headNode;
        while(list1&&list2)
        {
            if(list1->val<list2->val)
            {
                headNode->next=list1;
                list1=list1->next;
                headNode=headNode->next;
            }
            else{
                headNode->next=list2;
                list2=list2->next;
                headNode=headNode->next;

            }
        }
        while(list1)
        {
                headNode->next=list1;
                list1=list1->next;
                headNode=headNode->next;
        }
        while(list2){
            headNode->next=list2;
                list2=list2->next;
                headNode=headNode->next;

        }
        return fin;
    }
};