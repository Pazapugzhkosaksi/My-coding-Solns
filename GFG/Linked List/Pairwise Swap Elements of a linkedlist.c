// Successful approach 
// Found the soln almost by writing it on paper first, but can be optimized
 
Node* pairWiseSwap(struct Node* head) 
{
    if(head== NULL || head->next==NULL)
        return head;
    Node *t=head,*curr=head->next;
    t->next=curr->next;
    curr->next=head;
    head=curr;
    Node* prev=curr->next;
    while( prev->next!=NULL && prev->next->next!=NULL)
    {
          curr=prev->next;
          prev->next=curr->next;
          curr->next=curr->next->next;
          prev->next->next=curr;
          t=curr;
          prev=curr;
    }
    return head;
}