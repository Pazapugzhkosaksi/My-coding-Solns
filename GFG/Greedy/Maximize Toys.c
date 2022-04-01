//   My soln

int toyCount(int N, int K, vector<int> arr)
    {
       sort(arr.begin(),arr.end());
       int c=0;
       for(int i=0;i<N;i++)
       {
           if(K-arr[i]<0)
              break;
           K-=arr[i];
           c+=1;
       }
       return c;
    }


// Alternate Solns

    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
            if(sum>K){
                return i;
            }
        }
    }

