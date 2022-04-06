// Optimal Soln

		int count(Node* head)
		    {
		        int c=0;
		        while(head!=NULL)
		        {
		            c+=1;
		            head=head->next;
		        }
		        return c;
		    }
		    
		    int getMiddle(Node *head)
		    {
		        int c=count(head);
		        if(c==0)
		            return -1;
		        int m=(c/2)-1;
		        Node* temp=head;
		        for(int i=0;i<=m;i++)
		        {
		            temp=temp->next;
		        }
		        return temp->data;
		            
		    }


// Other Soln

		    int getMiddle(Node *head)
		    {
		      Node* slow=head,*fast=head;
		      while(fast!=NULL && fast->next!=NULL)
		      {
		          slow=slow->next;
		          fast=fast->next->next;
		      }
		      return slow->data;
		    }