 // 55/89 cases passed
 vector<int> twoRepeated (int arr[], int n) {
        map<int,int> m;
        vector<int> res;
        for(int i=0;i<n+2;i++)
        {
            m[arr[i]]+=1;
            if(m[arr[i]]==2)
                res.push_back(arr[i]);
        }
        if(res.size()==2)
            break;
        return res;
    }


// Successful approach based on Peer solution
vector<int> twoRepeated(int arr[], int n) {
    vector<int> res;
    for(int i=0;i<n+2;i++)
    {
        if(arr[abs(arr[i])-1]<0)
            res.push_back(abs(arr[i]));
        arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        /*
         arr[abs(arr[i])-1]*=-1;
         if(arr[abs(arr[i])-1]>0)
            res.push_back(abs(arr[i]));
        */
    }
    
    return res;
}

/*
   eg) 1  2  1  3  4  3
      -1 -2  p
      -1 -2 -1 -3     p
*/