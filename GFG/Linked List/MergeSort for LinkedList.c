// Successful Approach
Node* mergeList(Node* first,Node* second)
   {
       Node* res=NULL;
       if(second==NULL)
        return first;
       if(first==NULL)
        return second;
       if(first->data<=second->data){
           res=first;
           res->next=mergeList(first->next,second);
       }    
       else{
           res=second;
           res->next=mergeList(first,second->next);
       }
       return res;
   }
   void getMid(Node* head,Node** first,Node** second){
        Node* slow=head,*fast=head->next;
        while(fast!=NULL )
        {
            fast=fast->next;
            if(fast!=NULL)
            {
            slow=slow->next;
            fast=fast->next;
            }
        }
        
        *first=head;
        *second=slow->next;
        slow->next=NULL;
        return ;
    }
    
    void mergeSorting(Node **head){
        Node *first,*second;
        //Node* curr=*head;
        if(*head==NULL || (*head)->next==NULL)
            return;
        getMid(*head,&first,&second);
        mergeSorting(&first);
        mergeSorting(&second);
        *head=mergeList(first,second);
    }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        mergeSorting(&head);
        //getMid(head,&first,&second);
        //cout<<second->data<<endl;
        return head;
    }