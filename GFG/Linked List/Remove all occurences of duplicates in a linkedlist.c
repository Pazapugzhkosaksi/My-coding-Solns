 Node* utility(Node* head, Node* temp,int *last)
{
    Node* curr=temp->next;
    if(curr->next!=NULL)
    {
        head=utility(head,temp->next,last);
    }
    if(temp->data==curr->data)
    {
        temp->next=curr->next;
        *last=curr->data;
        return head;
    }
    if(*last==curr->data)
    {
        temp->next=curr->next;
        *last=-1;
        return head;  // if this line is commented the approach will be successful
    }
    return head;    
}
    
Node* removeAllDuplicates(struct Node* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    int last=-1;
    Node* temp=head;
    Node* res =utility(head,temp,&last);
    if(res->data==last)
        res=res->next;
    return res;
}