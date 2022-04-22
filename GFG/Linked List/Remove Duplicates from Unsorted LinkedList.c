 // Successful Approach
 Node * removeDuplicates( Node *head) 
    {
        unordered_map<int,int>umap;
        Node* temp=head,*curr;
        umap[temp->data]=1;
        while(temp->next!=NULL)
        {
            curr=temp->next;
            if(umap.find(curr->data)==umap.end())
                umap[curr->data]=1;
            else
            {
                temp->next=curr->next;
                curr->next=NULL;
                continue;
            }
            temp=temp->next;
        }
        return head;
    }