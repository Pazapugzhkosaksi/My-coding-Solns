// Using two pointers
 struct Node* reverseList(struct Node *head)
    {
       Node* t=head,*curr=t->next;
        while(t->next!=NULL)
        {
            t->next=curr->next;
            curr->next=head;
            head=curr;
            curr=t->next;
        }
        return head;
    }