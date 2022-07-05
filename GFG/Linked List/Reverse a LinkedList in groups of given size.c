// Successful Approach but not space optimistic
struct node *reverse (struct node *head, int k)
    { 
        stack<int> s;
        struct node* temp=head,*h2=NULL,*curr=NULL;
        int i=1;
        while(temp!=NULL){
            s.push(temp->data);
            if((i%k)==0)
            {
                while(!s.empty() )
                {
                    int t=s.top();
                   // cout<<t<<endl;
                    if(h2==NULL)
                    {
                        struct node *tp=new node(t);
                        h2=tp;
                        curr=h2;
                    }
                    else
                    {
                        struct node *tp=new node(t);
                        curr->next=tp;
                        curr=tp;
                    }
                    s.pop();
                }
                i=0;
            }
            i++;
            temp=temp->next;
        }
        while(!s.empty() )
                {
                    int t=s.top();
                    //cout<<t<<endl;
                    if(h2==NULL)
                    {
                        struct node *tp=new node(t);
                        h2=tp;
                        curr=tp;
                    }
                    else
                    {
                        struct node *tp=new node(t);
                        curr->next=tp;
                        curr=tp;
                    }
                    s.pop();
                }
        
        return h2;
    }