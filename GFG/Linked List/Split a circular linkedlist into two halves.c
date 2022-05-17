void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node* temp=head->next;
    int c=1;
    while(temp->next!=head)
    {
        temp=temp->next;
        c+=1;
    }
    c+=1;
    temp->next=NULL;
    int j;
    if(c%2==0)
        j=c/2;
    else
        j=(c/2)+1;
    int i=1;
    Node*t =head;
    *head1_ref=head;
    while(i<j)
    {
        t=t->next;
        i++;
    }
    *head2_ref=t->next;
    t->next=*head1_ref;
    Node* t2=*head2_ref;
    while(t2->next!=NULL)
    {
        t2=t2->next;
    }
    t2->next=*head2_ref;
    
}