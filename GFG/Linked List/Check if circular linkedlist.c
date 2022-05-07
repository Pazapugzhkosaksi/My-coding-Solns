bool isCircular(struct Node *head){
    struct Node *temp=head->next;
    while(temp!=NULL )
    {
        if(temp->next==head || temp==head)
            return true;
        temp=temp->next;
    }
    return false;
}