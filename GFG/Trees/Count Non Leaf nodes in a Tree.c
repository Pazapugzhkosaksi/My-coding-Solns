// Successful and Optimal Approach
void inOrder(Node* root,int* c)
{
    if(root==NULL)
        return ;
    inOrder(root->left,c);
    if(root->left!=NULL || root->right!=NULL)
        *c+=1;
    inOrder(root->right,c);
}

int countNonLeafNodes(Node* root) {
   int c=0;
   inOrder(root,&c);
   return c;
}

// GFG Approach
int countNonLeafNodes(Node* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 0;
        return 1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
}