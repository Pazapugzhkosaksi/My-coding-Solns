

// 307 out of 432
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
       vector<int> counts;
       int c;
       for(int i=0;i<m;i++)
       {
           c=0;
           for(int j=0;j<n;j++)
           {
               if(arr2[j]<=arr1[i])
                   c+=1;
           }
        counts.push_back(c);
           
       }
    return counts;
    }