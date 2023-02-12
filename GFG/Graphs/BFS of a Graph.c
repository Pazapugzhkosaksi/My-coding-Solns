// Successful approach of Striver
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfs;
        int visited[V+1];
        memset(visited,0,(V+1)*sizeof(int));
        for(int i=0;i<V;i++)
        {
            if(!visited[i]){
                queue<int> q;
                visited[i]=1; 
                q.push(i);
                
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    bfs.push_back(node);     // Important to add the element into bfs array only after popping from queue
                    
                    for(int j=0;j<adj[node].size();j++)
                    {
                        if(visited[adj[node][j]]==0)
                        {
                            visited[adj[node][j]]=1;
                            q.push(adj[node][j]);
                        }
                    }
                }
                 return bfs; // This must be used if only the connected nodes needs to be returned
                
            }
        }
        //return bfs; This must be used if all the disconnected components are needed
}

// Revisited Approach
void bfs(vector<int> adj[],int V,vector<int> &visited,vector<int> &bfs_res,int i){
        visited[i]=1;
        bfs_res.push_back(i);
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                    bfs_res.push_back(it);
                }
            }
        }
    }
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V+1,0);
        vector<int> bfs_res;
        //for(int i=0;i<V;i++){
        //    if(!visited[0]){
                bfs(adj,V,visited,bfs_res,0);
          //  }
        //}
        return bfs_res;
    }