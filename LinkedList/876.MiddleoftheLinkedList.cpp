//Easy
//Given the head of a singly linked list, return the middle node of the linked list.
//If there are two middle nodes, return the second middle node.
//Input: head = [1,2,3,4,5]
//Output: [3,4,5]
//Input: head = [1,2,3,4,5,6]
//Output: [4,5,6]

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        while(first!=NULL && second!=NULL && second->next!=NULL)
        {
            first=first->next;
            second = second->next->next;
        }
        return first;
    }
};
