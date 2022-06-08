// Successful approach but not optimal and bad way of writing code :)
//  ***** Line num: 60 
  Node* reverse(struct Node* head)
    {
        Node* temp=head,*curr=temp->next;
        while(curr!=NULL)
        {
            temp->next=curr->next;
            curr->next=head;
            head=curr;
            curr=temp->next;
        }
        return head;
        
    }
    
    public:
    void rearrange(struct Node *head)
    {
        if(head->next==NULL)
            return ;
        Node* new1=NULL,*temp1=NULL,*new2=NULL,*temp2=NULL,*T=head;
        int flag=0;
        while(T!=NULL)
        {
            if(!flag)
            {
                Node* p=new Node(T->data);
                if(new1==NULL)
                {
                    new1=p;
                    temp1=p;
                }
                else
                {
                    temp1->next=p;
                    temp1=p;
                }
            }
            else
            {
             Node* p=new Node(T->data);
                if(new2==NULL)
                {
                    new2=p;
                    temp2=p;
                }
                else
                {
                    temp2->next=p;
                    temp2=p;
                }
                
            }
            T=T->next;
            flag=!flag;
        }
        new2=reverse(new2);
        temp1->next=new2;
        *head=*new1;
        Node* t2=head;
        // while(t2!=NULL)
        // {
        //     cout<<t2->data<<" ";
        //     t2=t2->next;
        // }
        // cout<<endl;
    
        return ;
    }