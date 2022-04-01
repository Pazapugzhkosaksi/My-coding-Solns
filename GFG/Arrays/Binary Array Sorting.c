
void binSort(int A[], int N)
    {
       int r=N-1,s=0;
       while(s<=r)
       {
           if(A[r]==1)
           {
              r-=1;
              continue;
           }
          if(A[s]==0)
          {
              s+=1;
              continue;
          }
          if(A[s]==1 && A[r]==0)
          {
            swap(A[s],A[r]);
            s+=1;
            r-=1;
          }
       }
    }