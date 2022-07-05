// My successful approach
vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
    
    vector<long long> a;
    queue<long long>q;
    int fn=0,f=0,c=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0 && f==0)
        {
            f=1;    
            fn=arr[i];
        }
        q.push(arr[i]);
        
    }
    a.push_back(fn);
    for(int i=k;i<n;i++)
    {
        int t=q.front();
        q.pop();
        if(t==fn)
        {
            fn=0;
            f=0;
            for(int j=i-k+1;j<=i;j++)
            {
                if(arr[j]<0 && f==0)
                {
                    f=1;
                    fn=arr[j];
                }
            }
        }
        
        q.push(arr[i]);
        if(arr[i]<0 && fn==0)
        {
            fn=arr[i];
            f=1;
        }
        a.push_back(fn);
    }
    return a;
 }

// Modified Soln after learning sliding window maximum

    vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
    deque<long long>q;
    vector<long long > res;
    for(int i=0;i<n;i++)
    {
        if(!q.empty() && q.front()==i-k)
            q.pop_front();
        if(arr[i]<0)
            q.push_back(i);
        if(i>=k-1)
        {
            if(q.empty())
                res.push_back(0);
            else
                res.push_back(arr[q.front()]);
        }
    }
      return res;                                          
 }