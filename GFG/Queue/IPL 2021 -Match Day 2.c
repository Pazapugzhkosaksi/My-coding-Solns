//Striver approach to Sliding maximum
 vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int> q;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(!q.empty() && q.front()==i-k)
                q.pop_front();
            while(!q.empty() && arr[q.back()]<=arr[i])
                q.pop_back();
            q.push_back(i);
            if(i>=k-1)
            {
                res.push_back(arr[q.front()]);
            }
        }
        return res;
    }
