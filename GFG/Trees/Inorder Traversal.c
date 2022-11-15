void inOrderTraversal(Node* root, vector<int> &a)
    {
        if(root==NULL){
            return;
        }
        inOrderTraversal(root->left,a);
        a.push_back(root->data);
        inOrderTraversal(root->right,a);
        
    }
    
    vector<int> inOrder(Node* root) {
        vector<int> a;
        inOrderTraversal(root,a);
        return a;
    }