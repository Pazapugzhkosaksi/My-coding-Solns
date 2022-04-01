

// Successful Approach 

int binary_Search(int a[],int x,int l,int h)
{
    int mid=(l+h)/2;
    while(l<=h)
    {
        if(a[mid]==x)
            return mid;
        if(a[mid]<x)
            return binary_Search(a,x,mid+1,h);
        else
            return binary_Search(a,x,l,mid-1);
    }
    return -1;
}

string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
    sort(a2,a2+m);
    for(int i=0;i<m;i++)
    {
        if(binary_Search(a1,a2[i],0,n-1) == -1)
            return "No";
    }
    return "Yes";
}