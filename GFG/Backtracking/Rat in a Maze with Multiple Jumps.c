// Successful and Optimal Approach
bool findSoln(vector<vector<int>> matrix,vector<vector<int>> &soln,int n,int i,int j){
    if(i<0 || j<0 || i>n-1 || j>n-1)
        return false;
    if(i==n-1 && j==n-1)
    {
        soln[i][j]=1;
        return true;
    }
    soln[i][j]=1;
    for(int k=1;k<=matrix[i][j];k++)
    {
        if(findSoln(matrix,soln,n,i,j+k))
            return true;
        if(findSoln(matrix,soln,n,i+k,j))
            return true;
    }
    soln[i][j]=0;
    return false;    
        
    
}

vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
   int n=matrix.size();
   vector<vector<int>> soln(n,vector<int>(n,0));
   vector<vector<int>> ans;
   ans.push_back(vector<int>(1,-1));
   if(findSoln(matrix,soln,n,0,0))
          return soln;
   else 
       return ans;
}