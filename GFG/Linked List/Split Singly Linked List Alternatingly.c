void alternatingSplitList(struct Node* head) 
{
    int c=1;
    Node* temp=head;
    Node * new_node=NULL,*c1=NULL,*c2=NULL;
    while(temp!=NULL)
    {
        
        if(c%2==1){
           new_node=new Node(temp->data);
           if(a==NULL)
           {
               a=new_node;
               c1=new_node;
           }
          else{
              c1->next=new_node;
              c1=new_node;
          }
        }
        else{
           new_node=new Node(temp->data);
           if(b==NULL)
           {
               b=new_node;
               c2=new_node;
           }
          else{
              c2->next=new_node;
              c2=new_node;
          }
        }
        temp=temp->next;
        c+=1;
    }
}