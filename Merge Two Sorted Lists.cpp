/*

Merge two sorted linked lists and return it as a new list. 

The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.

For example, given following linked lists :

  5 -> 8 -> 20 
  4 -> 11 -> 15
The merged list should be :

4 -> 5 -> 8 -> 11 -> 15 -> 20

*/
ListNode* Solution::mergeTwoLists(ListNode* d1, ListNode* d2) {

    if(d1==NULL) return d2;

    if(d2==NULL) return d1;

    if(d1->val>d2->val) swap(d1,d2);

    ListNode* res=d1;

    while(d1&&d2){

        ListNode*temp=NULL;

        while(d1!=NULL&&d1->val<=d2->val){

            temp=d1;

            d1=d1->next;

        }

        temp->next=d2;

        swap(d1,d2);

    }

    return res;

}
