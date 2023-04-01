// Successful Solution using striver's approach
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


class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        vector<int> adj[K];
        for(int i=0;i<N-1;i++)
        {
            string s1=dict[i];
            string s2=dict[i+1];
            int len=min(s1.length(),s2.length());
            for(int i=0;i<len;i++)
            {
                if(s1[i]!=s2[i]){
                    adj[s1[i]-'a'].push_back(s2[i]-'a');
                    break;
                }
            }
        }
        string ans="";
        vector<int> topo= topoSort(K,adj);
        for(int i=0;i<topo.size();i++){
            ans=ans+char(topo[i]+'a');
        }
        
        return ans;
    }
};