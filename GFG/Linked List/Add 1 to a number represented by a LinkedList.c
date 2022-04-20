// Will work incase of small integers
Node* addOne(Node *head) 
    {
       int i=0;
       Node *temp=head;
       while(temp!=NULL)
       {
           i=(i*10)+temp->data;
           temp=temp->next;
       }
       i+=1;
       
      Node* h1=NULL,*curr=NULL;
      while(i>0)
      {
          int r=i%10;
          curr=new Node(r);
           if(h1==NULL)
           {
               h1=curr;
           }
           else
           {
            curr->next=h1;
            h1=curr;
           }
          i=i/10;
      }
       return h1;
    }