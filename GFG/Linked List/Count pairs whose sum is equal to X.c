// Successful Approach
int countPairs(struct Node* head1, struct Node* head2, int x) {
         Node * t=head1;
         map<int,int> m;
         while(t!=NULL)
         {
             m[t->data]+=1;
             t=t->next;
         }
         t=head2;
         int c=0;
         while(t!=NULL){
             int a=(x-t->data);
             if(m.find(a)!=m.end())
             {
                //cout<<"("<<a<<","<<t->data<<")"; 
                c+=1;
             }
            t=t->next;
         }
        // cout<<endl;
         return c;
}