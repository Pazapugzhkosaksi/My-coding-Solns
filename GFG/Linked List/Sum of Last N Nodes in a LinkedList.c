
// Successful and Optimal Approach
int count(Node* head){
  int c=0;
  Node *temp=head;
  while(temp!=NULL)
  {
    c+=1;
    temp=temp->next;
  }
  return c;
}

int sumOfLastN_Nodes(struct Node* head, int n)
{
      int c=count(head);
      Node *temp=head;
      int i=1;
      while(i<=c-n)
      {
          temp=temp->next;
          i+=1;
      }
      int sum=0;
      while(temp!=NULL)
      {
          sum+=temp->data;
          temp=temp->next;
      }
      return sum;
}