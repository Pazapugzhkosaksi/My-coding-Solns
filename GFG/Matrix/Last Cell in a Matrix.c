// Successful and Optimal Approach
 pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
         int n=matrix.size();
         int m=matrix[0].size();
         int delrow[]={0,+1,0,-1};
         int delcol[]={1,0,-1,0};
         int i=0;
         int row=0,col=0;
         pair<int,int> res;
         while(row>=0 && row<n && col>=0 && col<m)
         {
             if(matrix[row][col]==1)
             {
                 matrix[row][col]=0;
                 i=(i+1)%4;
             }
             if(row+delrow[i]<0 || row+delrow[i]>=n || col+delcol[i]<0 || col+delcol[i]>=m)
             {
                 res=make_pair(row,col);
                 return res;
             }
             
             row+=delrow[i];
             col+=delcol[i];
             //cout<<row<<":"<<col<<endl;
         }
         return res;
}
    