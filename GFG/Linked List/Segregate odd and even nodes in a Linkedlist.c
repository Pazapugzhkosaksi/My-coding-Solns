//Successful and optimal Approach
// But a bad way of writing code :(
Node* reverseList( Node *head)
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

class Solution{
public:

    

    Node* divide(int N, Node *head){
        // having an actual tail pointer helps us to find the last node as tail will get updated 
        // after each odd node is detected 
        Node * actual_tail=NULL,*tail=NULL;
        Node *temp=head,*reverseHead=new Node(head->data); // having a new head to reverse the data as the function call modifies the original head
        bool flag_even=false,flag_odd=false;
        Node * t1=head->next,*curr=reverseHead;
        if(curr->data%2==1)         
            flag_odd=true;
        else
            flag_even=true;
        while(t1!=NULL)
        {
            if(t1->data%2==1)
                flag_odd=true;
            else
                flag_even=true;
            Node *new_node=new Node(t1->data);
            curr->next=new_node;
            curr=new_node;
            t1=t1->next;
        }
        // checking if the list contains only odd or only even elements
        if((flag_odd && !flag_even) || (flag_even && !flag_odd))
            return head;
        
        Node* reversed_head=reverseList(reverseHead);
        
        Node* t=reversed_head;
        int c=0;
        // traversing the reversed head so that we can insert odd elements after the last even node 
        while(t!=NULL && t->data%2==1){
            t=t->next;
            c+=1;
        }
        int skip_nodes=N-c;
        int i=1;
        while(i<skip_nodes)
        {
            i+=1;
            temp=temp->next;
        }
        tail=temp;
        actual_tail=temp;
  
        while(head!=NULL && head->data%2==1)
        {
            Node *curr=new Node(head->data);
            curr->next=tail->next;
            tail->next=curr;
            tail=curr;
            head=head->next;
        }
 
        temp=head;
        if(actual_tail==head)
            return head;
        while(temp!=NULL && temp->next!=actual_tail){
            if(temp->next->data%2==1)
            {
                Node * curr=new Node(temp->next->data);
                curr->next=tail->next;
                tail->next=curr;
                tail=curr;
                temp->next=temp->next->next;
                continue;
            }
            temp=temp->next;
        }
        
        return head;
    }