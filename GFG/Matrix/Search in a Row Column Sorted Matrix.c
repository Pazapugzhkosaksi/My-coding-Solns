
Expected TC     O(N+M)
Expected SC     O(1)    

// BruteForce Approach O(n*m) , O(1)
bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(matrix[i][j]==x)
                    return 1;
           }
       }
       return 0;
    }

// Skipping the inner loop

    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
       for(int i=0;i<n;i++)
       {
           if(matrix[i][m-1]<x)
                continue;
           for(int j=0;j<m;j++)
           {
               if(matrix[i][j]==x)
                    return 1;
           }
       }
       return 0;
    }

// Other Approach   Find TC

    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
       int row=0,col=m-1;
       while(row<n && col>=0)
       {
           if(matrix[row][col]==x)
                return 1;
           if(matrix[row][col]<x)
                row++;
           else
             col--;
       }
       return 0;
    }