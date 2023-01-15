// Successful and optimal approach
// No complexities mentioned


int compare(Node *list1, Node *list2) 
{
     Node* t1=list1,*t2=list2;
     while(t1!=NULL && t2!=NULL)
     {
         if(t1->c<t2->c)
            return -1;
         else if(t1->c>t2->c)
            return 1;
         t1=t1->next;
         t2=t2->next;
     }
     if(t1!=NULL && t2==NULL)    // if str1 is greater than str2
        return 1;
     else if(t1==NULL && t2!=NULL) // if str2 is greater than str1
        return -1;
     return 0;
}