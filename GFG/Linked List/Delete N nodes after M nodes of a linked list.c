// Successful Approach but can try avoiding creating a new list
void linkdelete(struct Node  *head, int M, int N)
    {
        // no need of deleting elements
        if(N==0)
            return;
        Node* temp=head;
        // checking if M==0 and if it is setting a flag to ensure no elements are skipped 
        // and the value doesnt change throught the iteration of the list
        int b=0,f=1;
        if(M>0)
        {
          b=M-1;
          f=0;
        }
        while(temp!=NULL)
        {
            if(b==0)
            {
                Node *t=temp->next;
                for(int i=0;i<N && t!=NULL;i++){
                    t->data=-1;
                    t=t->next;
                }
                temp=t;
                if(!f)
                    b=M-1;
                continue;
            }
            temp=temp->next;
            // only if the value is greater than 0 we need to increment
            // else not necessary
            if(!f)
                b-=1;
        }
        
        Node * newlist=new Node(head->data);
        Node *tem=head->next;
        Node * curr=newlist;
        while(tem!=NULL){
            if(tem->data!=-1)
            {
                Node * n=new Node(tem->data);
                curr->next=n;
                curr=n;
            }
            tem=tem->next;
        }
        *head=*newlist;
    }

// Successful approach without creating a newlist

    void linkdelete(struct Node  *head, int M, int N)
    {
        if(N==0)
            return;
        Node* temp=head;
        int b=0,f=1;
        if(M>0)
        {
          b=M-1;
          f=0;
        }
        while(temp!=NULL)
        {
            if(b==0)
            {
                Node *t=temp->next;
                for(int i=0;i<N && t!=NULL;i++){
                    t->data=-1;
                    t=t->next;
                }
                temp=t;
                if(!f)
                    b=M-1;
                continue;
            }
            temp=temp->next;
            if(!f)
                b-=1;
        }
        
        Node *t=head;
        Node* curr;
        while(t!=NULL)
        {
            curr=t->next;
            if(curr!=NULL && curr->data==-1){
                t->next=curr->next;
                curr->next=NULL;
                continue;
            }
            t=t->next;
        }