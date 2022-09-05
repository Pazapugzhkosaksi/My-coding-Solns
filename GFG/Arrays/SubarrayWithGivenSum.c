
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
    //Successful Approach
    vector<int> subarraySum(int arr[], int n, long long S)
    {
        int sum=arr[0],s=0,e=0;
        int i;
        vector<int>v;
        for(i=1;i<=n;)  // find out y the loop is going till =n
        {
            if(sum==S)
            {
                v.push_back(s+1);
                v.push_back(i);
              //  cout<<"arr[i]:"<<arr[i];
                break;
            }
            else if(sum>S)
            {
                sum-=arr[s];
                s+=1;
                continue;
            }
            
            sum+=arr[i];
            i++;
            //cout<<sum<<endl;
        }
        if(v.empty())
            v.push_back(-1);
        return v;
    }