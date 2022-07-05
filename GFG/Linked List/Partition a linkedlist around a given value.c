// My successful Approach
struct Node* partition(struct Node* head, int x) {
    int lesser[100000];
    int greater[100000];
    memset(lesser,0,100000*sizeof(int));
    memset(greater,0,100000*sizeof(int));
    int i=0,j=0,c=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data<x)
            lesser[i++]=temp->data;
        else if(temp->data==x)
            c+=1;
        else 
            greater[j++]=temp->data;
        temp=temp->next;
    }
    Node* h2=NULL,*curr=NULL;
    for(int k=0;k<i;k++)
    {
        
        Node* t=new Node(lesser[k]);
        if(h2==NULL)
        {
            h2=t;
            curr=t;
        }
        else
        {
            curr->next=t;
            curr=t;
        }
    }
    for(int k=0;k<c;k++)
    {
        Node* t=new Node(x);
        if(h2==NULL)
        {
            h2=t;
            curr=t;
        }
        else
        {
            curr->next=t;
            curr=t;
        }
    }
    for(int k=0;k<j;k++)
    {
        Node* t=new Node(greater[k]);
        if(h2==NULL)
        {
            h2=t;
            curr=t;
        }
        else
        {
            curr->next=t;
            curr=t;
        }
    }
    return h2;
}