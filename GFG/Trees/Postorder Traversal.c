void postOrderTraversal(Node* root,vector<int> &a){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left,a);
    postOrderTraversal(root->right,a);
    a.push_back(root->data);
}

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
    vector<int> a;
    postOrderTraversal(root,a);
    return a;
}