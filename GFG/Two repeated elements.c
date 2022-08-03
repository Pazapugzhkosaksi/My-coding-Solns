 // 45/89 cases passed
 vector<int> twoRepeated (int arr[], int n) {
        map<int,int> m;
        vector<int> res;
        for(int i=0;i<n+2;i++)
        {
            m[arr[i]]+=1;
            if(m[arr[i]]==2)
                res.push_back(arr[i]);
        }
        return res;
    }