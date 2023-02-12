// Successful and Optimal Approach
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    map<int,int>mp;
    Node *t1=head1,*t2=head2;
    
    while(t1!=NULL){
        mp[t1->data]=1;
        t1=t1->next;
    }
    
    while(t2!=NULL){
        mp[t2->data]=1;
        t2=t2->next;
    }
    Node * res=NULL,*curr=NULL;
    for(auto it:mp){
        Node *t=new Node(it.first);
       // cout<<t->data<<endl;
        if(res==NULL)
        {
            res=t;
            curr=res;
        }
        else{
            curr->next=t;
            curr=t;
        }
    }
    return res;
}