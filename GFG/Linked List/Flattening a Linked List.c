// Successful Approach but not space complex
// S.C = O(N) 
Node *flatten(Node *root)
{
   vector<int> elems;
   Node * t=root;
   while(t!=NULL)
   {
       Node * temp=t;
       while(temp!=NULL)
       {
           elems.push_back(temp->data);
           temp=temp->bottom;
       }
       
       t=t->next;
   }
   sort(elems.begin(),elems.end());
   Node* res=new Node(elems[0]);
   Node *curr =res;
   for(int i=1;i<elems.size();i++)
   {
       Node * tem=new Node(elems[i]);
       curr->bottom=tem;
       curr=tem;
   }
   root=res;
   return root;
}