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

// Successful Approach using Recursion 
    
      int addll(Node* root,Node *head,int c)
    {
        if(head->next==NULL)
        {
            head->data=head->data+1;
            if(head->data>=10 && head!=root)
            {
                c=1;
                head->data=head->data-10;
            }
            else
                c=0;
            return c;
        }
        c=addll(root,head->next,c);
        head->data=head->data+c;
        if(head->data>=10 && head!=root)
        {
                c=1;
                head->data=head->data-10;
                return c;
        }
        else
        {
            c=0;
            return c;
        }
        
        
    }

    Node* addOne(Node *head) 
    {
        int c=0;
        Node* temp=head;
        addll(head,temp,c);
        return head;
    }


// Head Recursion

 int utility(Node* head,Node* temp,int c)
{
        if(temp->next!=NULL)
            c=utility(head,temp->next,c);
        else
        {
            temp->data=temp->data+c+1;
            if(temp->data>=10)
            {
                temp->data-=10;
                c=1;
            }
            return c;
        }
        temp->data=temp->data+c;
        if(temp->data>=10 && temp!=head)
        {
                temp->data-=10;
                c=1;
        }
        else{
            c=0;
        }
        return c;
    }
    Node* addOne(Node *head) 
    {
        if (head==NULL)
            return head;
        if(head->next==NULL)
        {
            head->data+=1;
            return head;
        }
        int c=0;
        Node* temp=head;
        c=utility(head,temp,c);
        return head;
}