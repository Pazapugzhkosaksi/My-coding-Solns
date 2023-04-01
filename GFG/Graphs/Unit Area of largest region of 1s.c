
// Successful Tweaked approach of number of islands
 int bfsCheck(vector<vector<int>> &grid,vector<vector<int>> &visited,int row,int col,int n,int m,int cnt)
    {
         visited[row][col]=1;
         queue<pair<int,int>> q;
         q.push({row,col});
         cnt+=1;
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
                     if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && visited[nr][nc]==0)
                     {
                         visited[nr][nc]=1;
                         q.push({nr,nc});
                         cnt+=1;
                     }
                 }
             }
         }
         return cnt;
}
    
    
    int findMaxArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int maxi=-1,cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && visited[i][j]==0)
                {
                    cnt=bfsCheck(grid,visited,i,j,n,m,0);
                    maxi=max(maxi,cnt);
                }
            }
        }
       // sort(cnts.begin(),cnts.end());
        if(maxi==-1)
            return 0;
        return maxi;
    }