
// O(n*n) solution 52/175 cases passed

vector<int> subarraySum(int arr[], int n, long long s)
    {
           vector<int> v;
           long long sum=0,f=0;
           for(int i=0;i<n;i++)
           {
              sum=arr[i];
              for(int j=i+1;j<n;j++)
              {
                  sum+=arr[j];
                  if(sum==s)
                  {
                      v.push_back(i+1);
                      v.push_back(j+1);
                      return v;
                  }
              }
              
              
           }
           v.push_back(-1);
           return v;
    }

    // Optimized O(n) solution