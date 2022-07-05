// Revision 
int findK(int arr[MAX][MAX], int n, int m, int k)
{
    int sc=0,sr=0,ec=m-1,er=n-1;
    int c=0;
    vector<int> a;
    while(sc<=ec && sr<=er)
    {
        for(int i=sc;i<=ec && c<(n*m);i++)
        {
            a.push_back(arr[sr][i]);  
            c+=1;
        }
        sr++;
        for(int j=sr;j<=er && c<(n*m);j++)
        {
            a.push_back(arr[j][ec]);
            c+=1;
        }
        ec--;
        for(int i=ec;i>=sc && c<(n*m);i--)
        {
            a.push_back(arr[er][i]);
            c+=1;
        }
        er--;
        for(int j=er;j>=sr && c<(n*m);j--)
        {
            a.push_back(arr[j][sc]);
            c+=1;
        }
        sc++;
    }
    // for(int i=0;i<a.size();i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
    return a[k-1];
}