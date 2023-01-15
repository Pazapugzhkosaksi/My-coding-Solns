// Successful and optimal Approach
vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
{
        int n=matrix.size();
        int limit=0;
        vector<int> ans;
        // for elements before the diagonal
        int j=0;
        while(j<n-1)
        {
           for(int row=0,col=j;row<n && col>=0;row++,col--)
                ans.push_back(matrix[row][col]);   
           j++;
        }

        // for the diagonal elements and the elements after the diagonal
        int i=0;
        while(i<n)
        {
            
            for(int row=i,col=n-1;row<n && col>=0;row++,col--)
                ans.push_back(matrix[row][col]);
            i++;
        }
        return ans;
}