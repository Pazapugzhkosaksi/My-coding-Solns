// Successful Approach
Node* findIntersection(Node* head1, Node* head2)
    {
        Node* res=NULL,*t=NULL,*curr=NULL;
        map<int,int> m;
        t=head1;
        while(t!=NULL)
        {
            m[t->data]=-1;
            t=t->next;
        }
        t=head2;
        while(t!=NULL)
        {
            m[t->data]=1;
            t=t->next;
        }
        t=head1;
        while(t!=NULL)
        {
            if(m[t->data]==1)
            {
                Node *temp=new Node(t->data);
                if(res==NULL)
                {
                    res=temp;
                    curr=temp;
                }
                else{
                    curr->next=temp;
                    curr=temp;
                }
            }
            t=t->next;
        }
        return res;
    }

//Updated: The above approach will not work in certain testcases

   // Eg 1 2 2 4
   //    1 2 2

Node* findIntersection(Node* head1, Node* head2)
{
     Node* res=NULL,*t=NULL,*curr=NULL;
        map<int,int> m;
        t=head1;
        while(t!=NULL)
        {
            m[t->data]+=1;
            t=t->next;
        }
        t=head2;
        while(t!=NULL)
        {
            if(m[t->data]>0)
            {
                m[t->data]-=1;
                Node *temp=new Node(t->data);
                if(res==NULL)
                {
                    res=temp;
                    curr=temp;
                }
                else{
                    curr->next=temp;
                    curr=temp;
                }
            }
            t=t->next;
        }
        return res;
}