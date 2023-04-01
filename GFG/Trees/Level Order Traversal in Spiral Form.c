// Level Order Traversal in Spiral Form
vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    queue<Node*> q;
    int c=0;
    bool flag=false;
    if(root==NULL)
        return ans;
    q.push(root);
    while(!q.empty())
    {
        vector<int>level;
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            Node* next=q.front();
            level.push_back(next->data);
            q.pop();
            if(next->left!=NULL)
                q.push(next->left);
            if(next->right!=NULL)
                q.push(next->right);
        }
        if(!flag)
        {
            for(int i=0;i<level.size();i++)
                ans.push_back(level[i]);
            
        }
        else{
         for(int i=level.size()-1;i>=0;i--)
            ans.push_back(level[i]);
        }
        if(c>0)
            flag=!flag;
        c+=1;
    }
    return ans;
    
}
