// Successful Approach
vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        queue<int> q;
        q.push(arr[0]);
        int max=arr[0];
        for(int i=1;i<k;i++)
        {
            q.push(arr[i]);
            if(arr[i]>max)
                max=arr[i];
        }
        vector<int> v;
        v.push_back(max);
        for(int i=1;i<=n-k;i++)
        {
            int s=q.front();
            //cout<<"popped element:"<<s<<endl;
            q.pop();
            //cout<<"Incoming element:"<<arr[i+k-1]<<endl;
            if(s==max)
            {
             //  cout<<"Inside: "<<arr[i]<<endl;
              
                //   for(int j=i;j<i+k;j++)
                //      cout<<arr[j]<<" ";
                //   cout<<endl;
                   max=INT_MIN;
                   for(int j=i;j<i+k;j++)
                   {
                       if(arr[j]>max)
                         max=arr[j];
                   }
            }
            q.push(arr[i+k-1]);
            if(arr[i+k-1]>max)
                max=arr[i+k-1];
            v.push_back(max);
            
                
        }
        return v;
    }