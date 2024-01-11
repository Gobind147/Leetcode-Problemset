//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. 
//Return the linked list sorted as well.
//Input: head = [1,1,2]
//Output: [1,2]
//Input: head = [1,1,2,3,3]
//Output: [1,2,3]
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp && temp->next)
        {
            if(temp->next->val == temp->val)
            {
                temp->next = temp->next->next;
                continue;
            }
            temp=temp->next;
        }
        return head;
    }
};
