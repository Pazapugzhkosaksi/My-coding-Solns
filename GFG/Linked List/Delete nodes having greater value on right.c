// Successful Approach using recursion
      Node* utility(Node* temp)
    {
        Node* curr=temp->next;
        if(curr->next->next!=NULL)
        {
            utility(temp->next);
        }
        if(curr->next->data>curr->data)
        {
            temp->next=curr->next;
        }
        return temp;
    }
    public:
    Node *compute(Node *head)
    {
        if(head->next==NULL)
            return head;
        else if(head->next->next==NULL)
        {
            if(head->next->data>head->data)
                return head->next;
            else
                return head;
        }
        else
        {
            Node* temp=head;
            Node* res=utility(temp);
            if(res->data<res->next->data)
                return res->next;
            return res;
        }
    }