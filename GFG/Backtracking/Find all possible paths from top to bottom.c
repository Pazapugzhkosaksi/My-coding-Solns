// Successful and Optimal Approach
void findPaths(vector<vector<int>>grid, vector<vector<int>> &ans,vector<int>&path,
               int n,int m,int i,int j){
    if(i==n-1 && j==m-1)
    {
        path.push_back(grid[i][j]);
        ans.push_back(path);
        path.pop_back();
        return;
    }
    path.push_back(grid[i][j]);
    if(i+1<n)
        findPaths(grid,ans,path,n,m,i+1,j);
    if(j+1<m)
        findPaths(grid,ans,path,n,m,i,j+1);
    path.pop_back();
}

vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
{
    vector<vector<int>> ans;
    vector<int> path;
    findPaths(grid,ans,path,n,m,0,0);
    return ans;
}