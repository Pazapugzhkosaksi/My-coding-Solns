//Successful approach
// Vartiation of NGE
int save_gotham(int arr[], int n)
{
        vector<long long> res;
        stack<long long>s;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && arr[i]>=s.top())
                s.pop();
            if(s.empty())
                res.push_back(0);
            else
                res.push_back(s.top());
            s.push(arr[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=res[i];
        //reverse(res.begin(),res.end());
        return sum;
}