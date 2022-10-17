// 310/410 cases passed 
int dfsUtil(int i,vector<int> &visited,vector<int> adj[],vector<int> &dfs,int c){
        dfs.push_back(i);
        visited[i]=1;
        for(int j=0;j<adj[i].size();j++)
        {
            if(!visited[adj[i][j]])
                c=dfsUtil(adj[i][j],visited,adj,dfs,c);
            else{
               // cout<<i<<": "<<adj[i][j]<<endl;
                return 1;
            }
        }
        visited[i]=0;  // important to set visited[i] back to 0 as it come back during backtracking
                       // it will falsely take the next node in its adjacency list as already visited
        return c;
        //return c;
}
bool isCyclic(int V, vector<int> adj[]) {
    
    for(int i=0;i<V;i++)
    {
        int c=0;
        vector<int>dfs,visited(V,0);
        c=dfsUtil(i,visited,adj,dfs,c);
        if(c==1)
            return true;
    }
    return false;
}