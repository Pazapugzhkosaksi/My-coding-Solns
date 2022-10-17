// Successful and optimal approach but can be optimized further
void moveZeroes(struct Node **head)
{
    
    int c=0,len=0;
    Node* t=*head;
    while(t!=NULL)
    {
        len+=1;
        if(t->data==0)
            c+=1;
        t=t->next;
    }
    if(c==0 || (c==len))   // if no zeros or present or if the linked list contains entirely zeros 
        return;            // skip the list
    
    Node * newlist=new Node(0);
    Node* curr=newlist;
    for(int i=0;i<c-1;i++)
    {
        Node *temp =new Node(0);
        curr->next=temp;
        curr=temp;
    }
    while((*head)->data==0)   // this while loop is used to skip the initial part of the list 
        *head=(*head)->next;  //    containing zeros
    curr->next=*head;
    t=*head;
    while(t!=NULL && t->next!=NULL)
    {
        if(t->next->data==0)
        {
            t->next=t->next->next;
            continue;
        }
        t=t->next;
    }
    *head=newlist;

// Optimal Approach

void moveZeroes(struct Node **head)
{
    Node* temp=(*head)->next,*prev=(*head);
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            Node* curr=temp;
             temp=temp->next;
            prev->next=temp;
            curr->next=(*head);
            *head=curr;
        }
        else{
            prev=temp;
            temp=temp->next;
        }
    }
}