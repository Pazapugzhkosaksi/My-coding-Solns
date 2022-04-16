
// Successful Approach
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

int getNthFromLast(Node *head, int n)
{
       int len=count(head);
       Node*temp=head;
       if(len-n<0)
         return -1;
       else
       {
           for(int i=1;i<len-n+1;i++)
           {
               temp=temp->next;
           }
           return temp->data;
       }
}

// This approach elimintes the need for two traversals
     int getNthFromLast(Node *head, int n)
     {
           //int len=count(head);
           Node* temp=head,*ans=head;
           int c=0;
           while(temp!=NULL)
           {
               if(c>=n)
                  ans=ans->next;
               c+=1;
               temp=temp->next;
           }
           if(n>c)
              return -1;
           return ans->data;
     }