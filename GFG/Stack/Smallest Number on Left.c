
// Successful but not optimistic as per criteria[Time Complexity: O(n), Space Complexity O(n)]

// TC O(n*n)
// Space O(3*n)
vector<int> leftSmaller(int n, int a[]){
        stack<int> s,ts;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            if(s.empty())
            {
                s.push(a[i]);
                arr.push_back(-1);
                continue;
            }
            if(a[i]>s.top()){
                arr.push_back(s.top());
                s.push(a[i]);
            }
            else{
                int f=0;
                while(!s.empty())
                {
                    int elem=s.top();
                    s.pop();
                    ts.push(elem);
                    if(elem<a[i])
                    {
                        arr.push_back(elem);
                        f=1;
                        break;
                    }
                }
                if(f==0 && s.empty())
                   arr.push_back(-1);
                while(!ts.empty())
                {
                    s.push(ts.top());
                    ts.pop();
                }
                s.push(a[i]);
            }
        }
        return arr;
    }

// The below code is a variant of the above approach with a slight tweak but it fails to pass all the cases
     vector<int> leftSmaller(int n, int a[]){
        stack<int> s,ts;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            if(s.empty())
            {
                s.push(a[i]);
                arr.push_back(-1);
                continue;
            }
            if(a[i]>s.top()){
                arr.push_back(s.top());
                s.push(a[i]);
            }
            else{
                while(!s.empty())
                {
                    
                    if(s.top()<a[i])
                    {
                        arr.push_back(s.top());
                        break;
                    }
                    ts.push(s.top());
                    s.pop();
                   
                }
                if(s.empty())
                   arr.push_back(-1);
                while(!ts.empty())
                {
                    s.push(ts.top());
                    ts.pop();
                }
                s.push(a[i]);
            }
        }
        return arr;
    }
