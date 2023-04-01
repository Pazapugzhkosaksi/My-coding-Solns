// Successful and Optimal Approach
vector<int> levelOrder(Node* root)
{
    vector<int> level;
    queue<Node*> q;
    if(root==NULL)
        return level;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        for(int i=0;i<q.size();i++)
        {
            Node *next=q.front();
            level.push_back(next->data);
            q.pop();
            if(next->left) q.push(next->left);
            if(next->right) q.push(next->right);
        }
    }
    return level;
}