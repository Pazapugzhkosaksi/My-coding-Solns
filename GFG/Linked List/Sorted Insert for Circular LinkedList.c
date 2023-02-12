// Successful and Optimal Approach 
Node *sortedInsert(Node* head, int data)
    {
           
       Node* tail=head->next;
       while(tail->next!=head){
           tail=tail->next;
       }
       
       if(data<=head->data){
          Node *new_node=new Node(data);
          new_node->next=head;
          tail->next=new_node;
          head=new_node;
       }
       else if(data>tail->data){
            Node *new_node=new Node(data);
            tail->next=new_node;
            new_node->next=head;
       }
       else{
           Node * temp=head;
           while(temp->next->data<data){
               temp=temp->next;
           }
           
           Node *new_node=new Node(data);
           new_node->next=temp->next;
           temp->next=new_node;
       }
       
       
       
       
       return head;
    }