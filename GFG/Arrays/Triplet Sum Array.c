// Successful but not time optimized O(n*n*logn)
bool find3Numbers(int A[], int n, int X)
{
    sort(A,A+n);
    int s;
    for(int i=0;i<n-2;i++)
    {
        s=A[i];
        for(int j=i+1;j<n-1;j++)
        {
            s+=A[j];
            if(binarySearchUtility(A,j+1,n,X-s)!=-1)
                return true;
            s-=A[j];
        }
    }
    return false;
}