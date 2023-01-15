// Based out of Striver
// T.C O( 4^(N*M) )
// S.C O(N*M)
void findPathUtility(vector<vector<int>>&m,vector<vector<int>> &visited,int row,int col,int n,vector<string> &res,string s)
    {
        if(row==n-1 && col==n-1)
        {
            
            res.push_back(s);
            return;
        }
        
        if(row+1<n && visited[row+1][col]==0 && m[row+1][col]==1)
        {
           visited[row][col]=1;
           s+='D';
           findPathUtility(m,visited,row+1,col,n,res,s); // downward
           visited[row][col]=0;
           s.pop_back();
        }
        
        if(col-1>=0 && visited[row][col-1]==0 && m[row][col-1]==1)
        {
           visited[row][col]=1;
           s+='L';
           findPathUtility(m,visited,row,col-1,n,res,s); // Left
           visited[row][col]=0;
           s.pop_back();
        }
        if(col+1<n && visited[row][col+1]==0 && m[row][col+1]==1)
        {
           visited[row][col]=1;
           s+='R';
           findPathUtility(m,visited,row,col+1,n,res,s); // Right
           visited[row][col]=0;
           s.pop_back();
        }
        if(row-1>=0 && visited[row-1][col]==0 && m[row-1][col]==1)
        {
           visited[row][col]=1;
           s+='U';
           findPathUtility(m,visited,row-1,col,n,res,s); // upward  
           visited[row][col]=0;
           s.pop_back();
        }
       // return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<vector<int>> visited(n,vector<int>(n,0));
        vector<string> res;
        string s="";
        if(m[0][0]==1)
            findPathUtility(m,visited,0,0,n,res,s);
        return res;
    }