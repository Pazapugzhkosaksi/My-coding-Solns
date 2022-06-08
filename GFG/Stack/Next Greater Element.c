// Bruteforce Approach (106/204)
vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>res;
        for(int i=0;i<n-1;i++)
        {
            int j;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]>arr[i])
                {
                    res.push_back(arr[j]);
                    break;
                }   
            }
            if(j==n)
                res.push_back(-1);
        }
        res.push_back(-1);
        return res;
    }

// Stack based approach but 105/204 cases
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector <long long> res;
        stack<int> s1,s2;
        for(int i=n-1;i>=0;i--)
            s1.push(arr[i]);
        while(!s1.empty())
        {
            int x=s1.top();
            s1.pop();
            while(!s1.empty() && s1.top()<=x)
            {
                s2.push(s1.top());
                s1.pop();
            }
            if(s1.empty())
                res.push_back(-1);
            else
                res.push_back(s1.top());
            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        return res;
    }

// Striver's soln (Successful)

vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long> res;
    stack<long long> s;
    s.push(arr[n-1]);
    res.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(!s.empty() && arr[i]>=s.top())
        {
            s.pop();
        }
        if(!s.empty())
            res.push_back(s.top());
        else
            res.push_back(-1);
        s.push(arr[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}
