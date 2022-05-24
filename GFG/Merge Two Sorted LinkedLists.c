Node* sortedInsert(Node* head,int data)
{
   Node* New=new Node(data);
    if(New->data<=head->data)
    {
        New->next=head;
        head=New;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=NULL && temp->next->data<data )
        {
            temp=temp->next;
        }
        New->next=temp->next;
        temp->next=New;
    }
    return head;
    
}

Node* sortedMerge(Node* head1, Node* head2)  
{  
    int c1=count(head1),c2=count(head2);
    if(c1<=c2)
    {
        while(head1!=NULL)
        {
            head2=sortedInsert(head2,head1->data);
            head1=head1->next;
        }
        return head2;
    }
    else{
        while(head2!=NULL)
        {
            head1=sortedInsert(head1,head2->data);
            head2=head2->next;
        }
        return head1;
    }
}  