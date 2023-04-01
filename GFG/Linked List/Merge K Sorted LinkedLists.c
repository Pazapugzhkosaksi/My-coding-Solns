// Successful and Optimal Approach
class Solution{
  public:
    //Function to merge K sorted linked list.
    
    Node* mergeLists(Node* first,Node*second){
        Node* res=NULL;
        if(first==NULL)
            return second;
        if(second==NULL)
            return first;
        if(first->data<=second->data)
        {
            res=first;
            res->next=mergeLists(first->next,second);
        }
        else{
            res=second;
            res->next=mergeLists(first,second->next);
        }
        return res;
    }
    
    void getMid(Node *head,Node** first,Node** second){
        Node* slow=head,*fast=head->next;
        while(fast!=NULL)
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
        return;
    }
    
    void mergeSorting(Node** head){
        Node * first,*second;
        if(*head==NULL || (*head)->next==NULL)
            return ;
        getMid(*head,&first,&second);
        mergeSorting(&first);
        mergeSorting(&second);
        *head=mergeLists(first,second);
    }
    
    Node * mergeKLists(Node *arr[], int K)
    {
           Node* head=arr[0],*t=NULL;
           for(int i=0;i<K-1;i++)
           {
               t=arr[i];
               while(t->next!=NULL)
               {
               //   cout<<t->data<<" ";
                 t=t->next;
               }
               //cout<<endl;
               t->next=arr[i+1];
           }
           mergeSorting(&head);
           return head;
    }
};