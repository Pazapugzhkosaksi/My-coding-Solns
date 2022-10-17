// My approach. Not optimal for large integers
struct Node* reverseList(struct Node *head)
{
       Node* t=head,*curr=t->next;
        while(t->next!=NULL)
        {
            t->next=curr->next;
            curr->next=head;
            head=curr;
            curr=t->next;
        }
        return head;
}

long long unsigned int decimalValue(Node *head)
{
   if(head==NULL || head->next==NULL)
     return 0;
   head=reverseList(head);    
   long long unsigned int s=0;
   int c=0;
   Node* t=head;
   while(t!=NULL)
   {
       s=s+(int)(t->data*((int)pow(2,c)%1000000007))%1000000007;
    //   cout<<s<<endl;
       c+=1;
       t=t->next;
   }
   return s;
}

// Peer Approach
// Rather than computing power each time, just multiplies the prev result by 2 in each iteration
long long unsigned int decimalValue(Node *head)
{
   if(head==NULL || head->next==NULL)
     return 0;
   long long unsigned int s=0;
   Node* t=head;
   while(t!=NULL)
   {
       s=(s*2)%1000000007+t->data;
       t=t->next;
   }
   return s;
}

// Examples of Explanation
/*
0->0->0->1->1->0->0->1->0
{
    0*2 + 0 = 0
    0*2 + 0 = 0
    0*2 + 0 = 0
    0*2 + 1 = 1
    1*2 + 1 = 3
    3*2 + 0 = 6
    6*2 + 0 = 12
   12*2 + 1 = 25
   25*2 + 0 = 50

   1->0->0

   0*2 + 1 = 1
   1*2 + 0 = 2
   2*2 + 0 = 4

}

*/