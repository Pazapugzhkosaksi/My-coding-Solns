// Successful approach
Node *sortedInsert(struct Node* head, int data) {
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