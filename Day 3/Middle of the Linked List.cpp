/*
By: Anshul Kansal
Link for question : https://leetcode.com/problems/middle-of-the-linked-list/
*/
// Given a non-empty, singly linked list with head node head, return a middle node of linked list.
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t = head;
        int x=0;
        while(t!= NULL)
        {
            x++;
            t = t->next;
        }
        t = head;
        for(int i=1;i<((x/2)+1);i++)
        {
            t = t->next;
        }
        return t;
    }
};