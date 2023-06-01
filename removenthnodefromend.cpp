/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *fwd=A;
    while(fwd!=NULL && B>=0)
    {
        fwd=fwd->next;
        B--;
    }
    ListNode * prev=A;
    while(fwd!=NULL)
    {
        fwd=fwd->next;
        prev=prev->next;
    }
    if(prev==A)
    {
        return A->next;
    }
    else
    {
        prev->next=prev->next->next;
    }
    return A;
}
