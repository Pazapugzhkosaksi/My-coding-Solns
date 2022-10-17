10344/100020 cases passed
void frequencyCount(vector<int>& arr,int N, int P)
    { 
        int bigger = N>P? N:P;
        for(int i=0;i<bigger;i++)
        {
            arr.push_back(0);
        }
        reverse(arr.begin(),arr.end());
        for(int i=bigger;i<arr.size();i++)
        {
            arr[arr[i]-1]+=1;
        }
    }
};