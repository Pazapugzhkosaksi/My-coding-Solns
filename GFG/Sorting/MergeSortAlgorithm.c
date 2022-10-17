// Merge Sort Algorithm
// Time Complexity O(NLogN) in all three cases
// Space Complexity O(N)
void merge(int a[], int l, int m, int r)
    {
        int temp[1000000];
        int i=l,j=m+1,k=l;
        while(i<=m && j<=r)
        {
            if(a[i]<a[j])
            {
                temp[k++]=a[i++];
            }
            else
            {
                temp[k++]=a[j++];
            }
        }
        while(i<=m)
        {
            temp[k++] = a[i++];
        }
        while(j<=r){
            temp[k++] = a[j++];
        }
        for(int i=l;i<k;i++)
            a[i]=temp[i];
            
        return ;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r)
        {
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
        return;
    }