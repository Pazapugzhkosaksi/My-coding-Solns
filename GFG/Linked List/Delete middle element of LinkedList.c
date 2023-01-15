// Successful and optimal Approach
int length(Node* head){
    int c=0;
    Node * temp=head;
    while(temp!=NULL){
        c+=1;
        temp=temp->next;
    }
    return c;
}

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head==NULL || head->next==NULL) // base condition 
        return NULL;
    int len=length(head)/2;
    int c=1;
    Node * temp=head;
    while(c<len){           // we are not making <= here as temp needs to be stopped
        c+=1;               // exactly before the middle element inorder to be deleted
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}


// Peer Approach
Node* deleteMid(Node* head)
{
   if(head==NULL || head->next==NULL)
      return NULL;
   Node* p=head,*slow=head,*fast=head;
   while(fast!=NULL && fast->next!=NULL)
   {
       p=slow;
       s=slow->next;
       fast=fast->next->next;
   }
   p->next=slow->next;
   return head;
}


/* 1 2 3 4 5 6
 spf 
   p s f         1st
     p s   f     2nd

