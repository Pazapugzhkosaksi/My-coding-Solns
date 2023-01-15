// Succesful and Optimal approach based on Striver

void dfs(vector<vector<int>>& image, int row, int col,int iniColor, int newColor,vector<vector<int>> &ans,int delrow[],int delcol[],int n,int m){
    ans[row][col]=newColor;
    for(int i=0;i<4;i++)
    {
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && ans[nrow][ncol]!=newColor)
        {
            dfs(image,nrow,ncol,iniColor,newColor,ans,delrow,delcol,n,m);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int iniColor=image[sr][sc];
    vector<vector<int>> ans=image;
    int delrow[]={-1,0,+1,0};
    int delcol[]={0,+1,0,-1};
    int n=image.size();
    int m=image[0].size();
    dfs(image,sr,sc,iniColor,newColor,ans,delrow,delcol,n,m);
    return ans;
}