// Successful Approach
vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>> a;
        for(int i=0;i<V;i++)
        {
            vector<int> t;
            t.push_back(i);
            for(int j=0;j<adj[i].size();j++)
            {
                t.push_back(adj[i][j]);
            }
            a.push_back(t);
        }
        return a;
    }