// Striver Approach using DFS
bool dfsUtil(int i,int parent,vector<int> &visited,vector<int> adj[]){
        visited[i]=1;
        for(auto it: adj[i]){
            if(visited[it] && parent!=it)
            {
                return true;
            }
            else if(!visited[it]){
                if(dfsUtil(it,i,visited,adj)) return true;  // imp line should not just return dfsUtil()
                                                            // should only return true;
            }
            
        }
        return false;
}
bool isCycle(int V, vector<int> adj[]) {
    vector<int>dfs,visited(V,0);
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
        bool c=false;
        c=dfsUtil(i,-1,visited,adj);
        if(c)
            return true;
        }
    }
    return false;
}

// Striver Approach using BFS
bool bfsUtil(int i,vector<int>& visited,vector<int> adj[]){
        visited[i]=1;
        queue<pair<int,int>>q;
        q.push({i,-1});
        while(!q.empty())
        {
            int node=q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto it:adj[node])
            {
                if(!visited[it]){
                    q.push({it,node});
                    visited[it]=1;
                }
                else if(parent !=it)
                {
                    return true;
                }
            }
        }
        return false;
}
    
bool isCycle(int V, vector<int> adj[]) {
    vector<int>bfs,visited(V,0);
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
        bool c=false;
        c=bfsUtil(i,visited,adj);
        if(c)
            return true;
        }
    }
    return false;
}