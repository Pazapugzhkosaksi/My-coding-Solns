// Optimal Approach
void removeDuplicates(struct Node* head)
{
    int t=0;
    struct Node*temp=head;
    while(temp->next!=NULL)
    {
        t=temp->data;
        struct Node* curr=temp->next;
        if(t==curr->data)
        {
            temp->next=curr->next;
            curr->next=NULL;
        }
        else
            temp=temp->next;
    }
    
    return head;

// Similar Alternative Approach

    Node *removeDuplicates(Node *head)
    {
        int t=0;
        Node*temp=head;
        while(temp->next!=NULL)
        {
            t=temp->data;
            if(t==temp->next->data)
            {
                temp->next=temp->next->next;
                continue;
            }
            temp=temp->next;
        }
        return head;
    }