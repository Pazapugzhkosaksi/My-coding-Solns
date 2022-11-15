//DFS approach of Striver
   bool dfsCheck(int i,vector<int>adj[],int color[]){
       if(color[i]==-1)
           color[i]=1;
       for(auto it:adj[i]){
           if(color[it]==-1){
               color[it]=1-color[i];  // setting a different color than that of i
               if(!dfsCheck(it,adj,color))
                  return false;
           }
           else if(color[it]==color[i]){
               return false;
           }
       }
       return true;
   }

	bool isBipartite(int V, vector<int>adj[]){
	    int color[V];
	    memset(color,-1,V*sizeof(int));
	    for(int i=0;i<V;i++){
	        if(color[i]==-1)
	        {
	            if(!dfsCheck(i,adj,color))
	                return false;
	        }
	    }
	    return true;
	    
	}