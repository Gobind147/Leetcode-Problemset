//Given the head of a linked list, rotate the list to the right by k places.
//Input: head = [1,2,3,4,5], k = 2
//Output: [4,5,1,2,3]
class Solution {
public:
    ListNode* findnthnode(ListNode* temp, int k)
    {
        int cnt =1;
        while(temp!=NULL)
        {
            if(cnt==k)
                return temp;
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0)
            return head;
        ListNode* tail = head;
        int len =1;
        while(tail->next!=NULL)
        {
            tail = tail->next;
            len = len +1;
        }
        if(k%len==0)
            return head;
        k=k%len;
        tail->next =head;
        ListNode* newlastnode = findnthnode(head,len-k);
        head = newlastnode->next;
        newlastnode->next=NULL;
        return head;
    }
};
