// Striver Approach using DFS
class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	void dfs(int node,vector<int> adj[],vector<int> &visited,stack<int> &s){
	    visited[node]=1;
	    for(auto it: adj[node])
	    {
	        if(!visited[it])
	        {
	            dfs(it,adj,visited,s);
	        }
	    }
	    s.push(node);
	    //return;
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   vector<int> visited(V,0);
	   stack<int> s;
	   for(int i=0;i<V;i++)
	   {
	       if(!visited[i])
	       {
	           dfs(i,adj,visited,s);
	       }
	   }
	   vector<int> topo;
	   while(!s.empty())
	   {
	       topo.push_back(s.top());
	       s.pop();
	   }
	   return topo;
	}













// Striver Approach using BFS

vector<int> topoSort(int V, vector<int> adj[]) 
{
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
	return topo;
}