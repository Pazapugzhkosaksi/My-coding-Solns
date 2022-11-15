void preorderTraversal(Node* root,vector<int> &a){
    if(root==NULL)
        return;
    a.push_back(root->data);
    preorderTraversal(root->left,a);
    preorderTraversal(root->right,a);
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  vector<int> a;
  preorderTraversal(root,a);
  return a;
}