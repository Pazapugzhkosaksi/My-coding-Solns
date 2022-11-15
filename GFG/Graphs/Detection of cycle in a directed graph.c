// My Approach
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

// Approach of striver using DFS
// 310/410 cases passed 
static bool dfs(int i,int visited[],int dfsv[],vector<int> adj[],int V){
        visited[i]=1;
        dfsv[i]=1;
        
        for(auto it: adj[i]){
            if(!visited[it]){
                if(dfs(it,visited,dfsv,adj,V)) return true;
            }
            else if(dfsv[it])
            {
                return true;
            }
        }
        
        visited[i]=0;
        return false;
}
    
bool isCyclic(int V, vector<int> adj[]) {
        int visited[V],dfsv[V];
        memset(visited,0,V*sizeof(int));
        memset(dfsv,0,V*sizeof(int));
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(dfs(i,visited,dfsv,adj,V)) return true;
            }
        }
        return false;
}

// Approach of Striver using BFS

bool isCyclic(int V, vector<int> adj[]) {
        vector<int> indegree(V,0);
        queue<int> q;
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
                indegree[it]++;
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            topo.push_back(node);
            q.pop();
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    if(topo.size()==V) return false;  
    return true;
}
