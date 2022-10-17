//Successful Approach but not an optimal solution
class Solution 
{
    public:
    void dfsUtil(int i,vector<int> &visited,vector<int> adj[],vector<int> &dfs){
        dfs.push_back(i);
        visited[i]=1;
        for(int j=0;j<adj[i].size();j++)
        {
            if(!visited[adj[i][j]]){
                dfsUtil(adj[i][j],visited,adj,dfs);
            }
        }
        return;
	}
	vector<int> dfs(int V, vector<int> adj[]) {
	    vector<int>dfs,visited(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            dfsUtil(i,visited,adj,dfs);
	        }
	        return dfs;
	    }
	}
	int findMotherVertex(int V, vector<int>adj[])
	{
	    for(int i=0;i<V;i++)
	    {
	        vector<int> dfs_res=dfs(V,adj);
	        if(dfs_res.size()==V)
	            return i;
	    }
	    return -1;
	}

};