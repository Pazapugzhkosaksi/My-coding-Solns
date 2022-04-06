// Successful Approach

	 Node* rotate(Node* head, int k)
    {
        Node* last=head;
        while(last->next!=NULL)
            last=last->next;
        for(int i=0;i<k;i++)
        {
            Node* temp=new Node(head->data);
            last->next=temp;
            last=temp;
            head=head->next;
        }
        return head;
    }

 // Another Successful approach

     Node* rotate(Node* head, int k)
    {
        Node* last=head,*curr=head;
        for(int i=0;i<k-1;i++)
            last=last->next;
       // cout<<last->data<<endl;
        while(curr->next!=NULL) 
            curr=curr->next;
        //cout<<curr->data<<endl;
        curr->next=head;
        head=last->next;			/* Imp Line */
        last->next=NULL;
        return head;
    }


    // Similar to Approach 2 but makes the linked list circular
     Node* rotate(Node* head, int k)
    {
        Node* last=head,*curr=head;
        while(curr->next!=NULL) 
            curr=curr->next;
        curr->next=head;
        for(int i=0;i<k-1;i++)
            last=last->next;
        head=last->next;
        last->next=NULL;
        return head;
    }