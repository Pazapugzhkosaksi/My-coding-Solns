int sumOfDependencies(vector<int> adj[], int V) {
       int sum=0;
       for(int i=0;i<V;i++)
       {
           for(int j=0;j<adj[i].size();j++)
           {
               sum+=1;
           }
       }
       return sum;
}