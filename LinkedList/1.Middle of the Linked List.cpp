class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* mid=head;
        ListNode* fast=head;
        while(fast&&fast->next)
        {
            mid=mid->next;
            fast=fast->next->next;
        }
        return mid;
    }
};