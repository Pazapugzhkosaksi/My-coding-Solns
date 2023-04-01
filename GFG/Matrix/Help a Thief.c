// Successful but not optimal as per criteria
int findMax(int arr[],int n)
    { 
        int maxi=arr[0],ind=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                ind=i;
            }
        }
        return ind;
        
    }
    
    int maxCoins(int A[], int B[], int T, int N) {
        if(T==0)
            return 0;
        if(T==1)
        {
            int* i1 = max_element(B,B+N);
            return *i1;
        }
        else{
            int s=0;
            while(T>0)
            {
               
                int ind=findMax(B,N);
                if(B[ind]==INT_MIN)
                    break;
                s+=B[ind];
                A[ind]-=1;
                if(A[ind]==0)
                    B[ind]=INT_MIN;
                T-=1;
            }
            return s;
        }
    }
    
// Peer Approach

    static bool comp(pair<int,int> a, pair<int,int> b)
     {
       return a.first > b.first;
     }
     
    int maxCoins(int a[], int b[], int T, int N) {
        vector <pair<int,int>> v;
       for (int i=0; i<N; i++)
       {
           v.push_back({b[i],a[i]});
       }
       sort (v.begin(), v.end(), comp);
       int ans=0;
       for(int i=0;i<N;i++)
       {
           if(T==0)
           break;
           else
           {
               if(v[i].second<=T)
               {
                   ans=ans+v[i].first*v[i].second;
                   T=T-v[i].second;
                   
               }
               else
               {
                   ans=ans+v[i].first*T;
                   break;
                   
               }    
           }
       }
       return ans;
       
    }