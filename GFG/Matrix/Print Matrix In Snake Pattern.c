
// My Approach
for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
          for(int j=0;j<n;j++)
          {
              *(arr+c)=matrix[i][j];
              c+=1;
              //printf("%d ",matrix[i][j]);
          }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                 *(arr+c)=matrix[i][j];
                c+=1;
              //printf("%d ",matrix[i][j]);
            }
        }