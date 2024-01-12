//You are given the heads of two sorted linked lists list1 and list2.
//Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
//Return the head of the merged linked list.
//Input: list1 = [1,2,4], list2 = [1,3,4]
//Output: [1,1,2,3,4,4]

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        while(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                temp->next = list1;
                list1= list1->next;
            }
            else
            {
                temp->next = list2;
                list2= list2->next;
            }
            temp = temp->next;
        }
        if(list1)
            temp->next = list1;
        if(list2)
            temp->next = list2;
        temp = dummy->next;
        delete dummy;
        return temp;
    }
};
