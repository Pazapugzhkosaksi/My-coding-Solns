 vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
       vector<int> a;  
       if(n==1)
       {
           for(int i=0;i<m;i++)
              a.push_back(matrix[0][i]);
       }
       else if(m==1)
       {
           for(int i=0;i<n;i++)
             a.push_back(matrix[i][0]);
       }
       else 
       {
       for(int j=0;j<m;j++)
            a.push_back(matrix[0][j]);
       for(int i=1;i<n;i++)
           a.push_back(matrix[i][m-1]);
       for(int j=m-2;j>=0;j--)
          a.push_back(matrix[n-1][j]);
       for(int i=n-2;i>=1;i--)
         a.push_back(matrix[i][0]);
       }
     return a;
    }


// Alternative Solution eliminating if conditions

        for(int i=0;i<m;i++)
            res.add(matrix[0][i]);
        for(int i=1;i<n;i++)
            res.add(matrix[i][m-1]);
        for(int i=m-2;i>0&&n!=1;i--)
            res.add(matrix[n-1][i]);
        for(int i=n-1;i>0&&m!=1;i--)
            res.add(matrix[i][0]);
        return res;