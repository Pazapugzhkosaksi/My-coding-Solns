// Successful Peer Approach 
 int height(struct Node* node){
        if(node ==NULL)
            return 0;
        int left=height(node->left);
        int right=height(node->right);
        return max(left,right)+1;
}

// Peer Approach
int height(struct Node* node){
        if(node ==NULL)
            return 0;
        return (1+height(node->left))>(1+height(node->right))?
        (1+height(node->left)):(1+height(node->right));
}