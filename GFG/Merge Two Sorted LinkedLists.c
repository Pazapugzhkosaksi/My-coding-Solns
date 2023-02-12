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


// Successful Approach using Striver

Node* sortedMerge(Node* head1, Node* head2)  
{  
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    // the starting node with lesser value has to be head1
    if(head1->data>head2->data)
        swap(head1,head2);
    
    // Stores the merged list    
    Node* res=head1;
    
    // Making temp point to the last lesser node of the other list
    while(head1!=NULL && head2!=NULL){
        Node* temp=NULL;
        // Making 
        while(head1!=NULL && head1->data<=head2->data)
        {
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        swap(head1,head2);
    }
    return res;
}  