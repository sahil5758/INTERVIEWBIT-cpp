/*

Reverse a linked list. Do it in-place and in one-pass.

For example:

Given 1->2->3->4->5->NULL,

return 5->4->3->2->1->NULL.


*/

ListNode* Solution::reverseList(ListNode* A) {
struct ListNode * current=A;
struct ListNode* prev=NULL;
struct ListNode * next;
while(current!=NULL)
{
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}

A=prev;    

return A;
}
