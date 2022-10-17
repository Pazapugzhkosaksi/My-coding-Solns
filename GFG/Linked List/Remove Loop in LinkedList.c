// Floyd Algorithm/ Hare and Tortoise Algorithm Approach
void removeLoop(Node* head)
{

        int flag=0;
        Node *s=head,*f=head;
        while(s!=NULL && f!=NULL && f->next!=NULL)  // Logic to detect loop in linked list;
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
            return;

        s=head;
        while(s!=f)
        {
            s=s->next;        // Logic to find starting point of loop in linked list
            f=f->next;
        }


        while(f->next!=s)
        {
            f=f->next;      // we find the last node in the loop and make it NULL;
        }
        f->next=NULL;
        
}