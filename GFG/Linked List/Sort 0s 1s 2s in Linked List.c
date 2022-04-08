// Not essentially the right approach,but works

	Node* segregate(Node *head) {
        
        int c0=0,c1=0,c2=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
                c0+=1;
            else if(temp->data==1)
                c1+=1;
            else
                c2+=1;
            temp=temp->next;
        }
        Node *t1=head;
        for(int i=0;i<c0;i++)
        {
            t1->data=0;
            t1=t1->next;
        }
         for(int i=0;i<c1;i++)
        {
            t1->data=1;
            t1=t1->next;
        }
        for(int i=0;i<c2;i++)
        {
            t1->data=2;
            t1=t1->next;
        }
        return head;
    }