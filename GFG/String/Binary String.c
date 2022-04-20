// 103/210 cases
long binarySubstring(int n, string a){
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]=='1' && a[j]=='1')
                    c+=1;
            }
        }
        return c;
    }