//easy
//Given the head of a singly linked list, reverse the list, and return the reversed list.
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while(head!=NULL)
        {
            ListNode* nextnode=head->next;
            head->next=prev;
            prev = head;
            head = nextnode;
        }
        return prev;
    }
};
