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
                    //cout<<node<<":popped"<<endl;
                    bfs.push_back(node);
                    
                    for(int j=0;j<adj[node].size();j++)
                    {
                        if(visited[adj[node][j]]==0)
                        {
                            visited[adj[node][j]]=1;
                          //  cout<<adj[node][j]<<" inserted inside for"<<endl;
                            q.push(adj[node][j]);
                        }
                    }
                }
                 return bfs; // This must be used if only the connected nodes needs to be returned
                
            }
        }
        //return bfs; This must be used if all the disconnected components are needed
}