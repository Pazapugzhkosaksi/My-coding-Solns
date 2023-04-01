
// Successful and Optimal approach using Striver's approach
void  solveNQueen(int col,vector<string> board,vector<vector<int>> &ans,int n,vector<int> &leftrow,vector<int> &ud,vector<int> &ld,vector<int> &res){

    if(col==n){
        ans.push_back(res);
        return;
    }
    
    for(int row=0;row<n;row++)
    {
        if(leftrow[row]==0 && ld[row+col]==0 && ud[n-1+col-row]==0){
            board[row][col]='Q';
            leftrow[row]=1;
            ld[row+col]=1;
            ud[n-1+col-row]=1;
            res.push_back(row+1);
            solveNQueen(col+1,board,ans,n,leftrow,ud,ld,res);
            board[row][col]='.';
            leftrow[row]=0;
            ld[row+col]=0;
            ud[n-1+col-row]=0;
            res.pop_back();
        }
    }
}
    
vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<int> res;
        vector<string> board(n);
        string s(n,'.');
        vector<int> lr(n,0),ud((2*n)-1,0),ld((2*n)-1,0);
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solveNQueen(0,board,ans,n,lr,ud,ld,res);
        return ans;
}