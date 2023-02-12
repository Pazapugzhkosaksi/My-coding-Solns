// Approach
    Node* divide(int N, Node *head){
        
        Node * tail=head,*actual_tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
            actual_tail=actual_tail->next;
        }
        while(head->data%2==1){
            Node * new_node= new Node(head->data);
            tail->next=new_node;
            tail=new_node;
            head=head->next;
        }
        Node * temp=head;
        // while(temp!=actual_tail)
        // {
        //     if(temp->next->data%2==1)
        //     {
        //         Node * new_node= new Node(temp->next->data);
        //         tail->next=new_node;
        //         tail=new_node;
        //         temp->next=temp->next->next;
        //         //continue;
        //     }
        //     temp=temp->next;
        // }
        return head;