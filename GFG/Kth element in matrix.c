// Successful but not optimal as per criteria
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a.push_back(mat[i][j]);
        }
    }
    sort(a.begin(),a.end());
    return a[k-1];
}
