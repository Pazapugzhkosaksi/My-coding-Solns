// Striver Approachs
int orangesRotting(vector<vector<int>>& grid) {

    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> visited(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==2){
                visited[i][j]=2;
                q.push({{i,j},0});
            }
            else{
                visited[i][j]=0; // check why this else part is needed
            }
        }
    }
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        int unit_time=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            unit_time=max(t,unit_time);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=r+delrow[i];
                int nc=c+delcol[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && visited[nr][nc]!=2){
                    q.push({{nr,nc},t+1});
                    visited[nr][nc]=2;
                }
            }
            
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && visited[i][j]!=2)
                    return -1;
            }
        }
        return unit_time;
}