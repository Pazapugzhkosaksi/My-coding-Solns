 Node *insertAtBegining(Node *head, int x) {
       Node* New=new Node(x);
       if(head==NULL)
       {
           head=New;
       }
       else
       {
       New->next=head;
       head=New;
       }
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node* New=new Node(x);
       if(head==NULL)
       {
          head=New;    
       }
       else
       {
           Node*temp = head;
           while(temp->next!=NULL)
           {
              temp=temp->next;
           }
           temp->next=New;
       }
       return head;
    }