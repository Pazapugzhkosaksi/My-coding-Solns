// Striver Approach using BFS
void bfscheck(vector<vector<char>> grid,vector<vector<int>> &visited,int row,int col,int n,int m)
{
         visited[row][col]=1;
         queue<pair<int,int>> q;
         q.push({row,col});
         while(!q.empty())
         {
             int cr=q.front().first;
             int cc=q.front().second;
             q.pop();
             //cout<<"\t"<<nr<<" "<<nc<<endl;
             for(int delrow=-1;delrow<=1;delrow++)
             {
                 int nr=cr+delrow;
                 for(int delcol=-1;delcol<=1;delcol++)
                 {
                     
                     int nc=cc+delcol;
                     if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && visited[nr][nc]==0)
                     {
                         visited[nr][nc]=1;
                         q.push({nr,nc});
                        // cout<<"pushed"<<endl;
                     }
                 }
             }
         }
         return;
}
    
int numIslands(vector<vector<char>>& grid) {
    int cnt=0;
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> visited(n,vector<int>(m,0));
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            if(grid[row][col]=='1' && visited[row][col]==0)
            {
                bfscheck(grid,visited,row,col,n,m);
                cnt++;
            }
        }
    }
    return cnt;
}

// My approach using DFS based out of Striver


 void dfs(vector<vector<char>> grid,vector<vector<int>> & visited,int row,int col,int n,int m){
        visited[row][col]=1;
        for(int delrow=-1;delrow<=1;delrow++)
        {
            int nr=row+delrow;
            for(int delcol=-1;delcol<=1;delcol++)
            {
                 
                int nc=col+delcol;
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && visited[nr][nc]==0)
                {
                    dfs(grid,visited,nr,nc,n,m);
                   
                }
            }
           
        }
         return;
    }
    // Function to find the number of islands.
int numIslands(vector<vector<char>>& grid) {
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<m;col++){
                if(grid[row][col]=='1' && visited[row][col]==0)
                {
                    dfs(grid,visited,row,col,n,m);
                    c++;    
                }
            }
        }
        return c;
}
