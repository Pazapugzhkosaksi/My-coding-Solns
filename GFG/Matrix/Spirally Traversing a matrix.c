
// My succesful approach (passed all test cases)

	 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
       
        vector<int> arr;
        int count=0;
        int sr=0,er=r-1,sc=0,ec=c-1;
        while(sr<=er && sc<=ec )
        {
        for(int j=sc;j<=ec;j++)
        {
            arr.push_back(matrix[sr][j]);
            count+=1;
            if(count==r*c)
                return arr;
        }
        sr+=1;
        for(int i=sr;i<=er;i++)
        {
            arr.push_back(matrix[i][ec]);
            count+=1;
            if(count==r*c)
                return arr;
        }
        ec-=1;
        for(int j=ec;j>=sc;j--)
        {
            arr.push_back(matrix[er][j]);
            count+=1;
            if(count==r*c)
                return arr;
        }
        er-=1;
        for(int i=er;i>=sr;i--)
        {
            arr.push_back(matrix[i][sc]);
            count+=1;
            if(count==r*c)
                return arr;
        }
        sc+=1;
        }
        return arr;
    }


     // Tweaked approach


         vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
       
        vector<int> arr;
        int count=0;
        int sr=0,er=r-1,sc=0,ec=c-1;
        while(sr<=er && sc<=ec )
        {
        for(int j=sc;count<(r*c) && j<=ec;j++)
        {
            arr.push_back(matrix[sr][j]);
            count+=1;
        }
        sr+=1;
        for(int i=sr;count<(r*c) && i<=er;i++)
        {
            arr.push_back(matrix[i][ec]);
            count+=1;
        }
        ec-=1;
        for(int j=ec;count<(r*c) && j>=sc;j--)
        {
            arr.push_back(matrix[er][j]);
            count+=1;
        }
        er-=1;
        for(int i=er;count<(r*c) && i>=sr;i--)
        {
            arr.push_back(matrix[i][sc]);
            count+=1;
        }
        sc+=1;
        }
        return arr;
    }