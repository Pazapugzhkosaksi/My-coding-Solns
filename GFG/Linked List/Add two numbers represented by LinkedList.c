// Successful Approach
class Solution
{
    public:
    int count(Node* head)
    {
        int c=0;
        while(head!=NULL)
        {
            c+=1;
            head=head->next;
        }
        return c;
    }
    struct Node* padding(Node* head,int c)
    {
        Node *temp,*first=NULL,*curr=NULL;
        if(c!=0)
        {
        for(int i=0;i<c;i++)
        {
            temp=new Node(0);
            if(!first)
            {
                first=temp;
                curr=temp;        
            }
            else{
                curr->next=temp;
                curr=temp;
            }
        }
        curr->next=head;
        head=first;
        }
        return head;
        
    }
    int utility(Node* first,Node* second,Node* t1,Node* t2,int c)
    {
        if(t1->next==NULL && t2->next==NULL){
            t1->data=t1->data+t2->data;
            if(t1->data>=10)
            {
                t1->data=t1->data-10;
                c=1;
            }
            else
            {
                c=0;
            }
            return c;
        }
        c=utility(first,second,t1->next,t2->next,c);
        t1->data=t1->data+t2->data+c;
        if(t1->data>=10 && t1!=first)
        {
            
                t1->data=t1->data-10;
                return 1; // not a good practice to return like this
        
        }
        else
            return 0;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        int c1=count(first),c2=count(second);
        int d=0;
        if(c1>=c2)
        {
            d=c1-c2;
            second=padding(second,d);
        }
        else if(c2>c1)
        {
            d=c2-c1;
            first=padding(first,d);
        }
        Node* t1=first,*t2=second;
        int c=utility(first,second,t1,t2,c);
        Node* temp=first;
        if(temp->data<10)
            return first;
        else
        {
            temp->data-=10;
            Node * c=new Node(1);
            c->next=first;
            return c;
        }
    }
};

// Stack Based Approach

Node* addSameSize(Node* head1, Node* head2, int* carry) 
{ 
    stack<int> s1,s2;
    Node* t1,*t2;
    while(head1!=NULL && head2!=NULL)
    {
        s1.push(head1->data);
        s2.push(head2->data);
        head1=head1->next;
        head2=head2->next;
    }
    Node *curr=NULL,*next=NULL;
    while(!s1.empty() && !s2.empty())
    {
        int sum=s1.top()+s2.top()+(*carry);
        curr=new Node(sum%10);
        if(sum>=10)
        {
            *carry=1;
        }
        else{
            *carry=0;
        }
        if(next==NULL)
            next=curr;
        else{
            curr->next=next;
            next=curr;
        }
        s1.pop();
        s2.pop();
    }
    return next;
} 


//This function is called after the smaller list is added to the sublist of 
//bigger list of same size. Once the right sublist is added, the carry
//must be added to left side of larger list to get the final result.
void addCarryToRemaining(Node* head1, Node* curr, int* carry, Node** result) 
{ 
    stack<int> s1;
    while(head1!=curr)
    {
        s1.push(head1->data);
        head1=head1->next;
    }
    Node *c=NULL;
    while(!s1.empty())
    {
        int sum=s1.top()+(*carry);
        c=new Node(sum%10);
        if(sum>=10)
        {
            *carry=1;
        }
        else{
            *carry=0;
        }
        c->next=*result;
        *result=c;
        s1.pop();
    }
    //*result=curr;
    //return *result;
}