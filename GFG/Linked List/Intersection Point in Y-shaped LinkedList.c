// Successful Approach (Space optimized)
        int intersectPoint(Node* head1, Node* head2)
        {
            int N=count(head1);
            int M=count(head2);
            Node*t1=head1,*t2=head2;
            if(N>M)
            {
                for(int i=0;i<N-M;i++)
                {
                    t1=t1->next;
                }
                while(t1!=NULL && t2!=NULL)
                {
                    if(t1==t2)
                        return t1->data;
                    t1=t1->next;
                    t2=t2->next;
                }
            }
            else if(M>N)
            {
                for(int i=0;i<M-N;i++)
                {
                    t2=t2->next;
                }
                while(t1!=NULL && t2!=NULL)
                {
                    if(t1==t2)
                        return t1->data;
                    t1=t1->next;
                    t2=t2->next;
                }
            }
            else if(N==M)
            {
                while(t1!=NULL && t2!=NULL)
                {
                    if(t1==t2)
                        return t1->data;
                    t1=t1->next;
                    t2=t2->next;
                }
            }
            else 
                return -1;
            
        }

//Another Approach

        int intersectPoint(Node* head1, Node* head2)
		{
		   Node *p1=head1,*p2=head2;
		   
		   while(1)
		   {
		       if(p1==p2)
		           return p1->data;
		       p1=p1->next;
		       p2=p2->next;
		       
		       if(p1==NULL and p2==NULL)
		           return -1;
		           
		       if(p1==NULL)
		           p1=head2;
		       if(p2==NULL)
		           p2=head1;
		   }
		   return -1;
		}