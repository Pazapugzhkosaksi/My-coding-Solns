// My successful approach

 string mostFrequentWord(string arr[], int n) 
    {
        map<string,int> m;
        int max_freq=0;
        // Constructing the map
        for(int i=0;i<n;i++)
        {
            m[arr[i]]+=1;
        }
        for(auto itr:m)
        {
            if(itr.second>max_freq)
                max_freq=itr.second;
        }
        
        // Removing lesser frequency elements from the map

        auto itr=m.begin();
        while(itr!=m.end())
        {
            if(itr->second!=max_freq)
            {
               itr=m.erase(itr);
            }
            else{
                itr++;
            }
        }



        // for(auto itr:m)
        //     cout<<itr.first<<" "<<itr.second<<endl;
        if(m.size()==1)
        {
            auto it=m.begin();
            return it->first;
        }
        // Returns the element that occurs last in the set of elements having same frequency
        else{
            for(int i=0;i<n;i++)
            {
                if(m.find(arr[i])!=m.end())
                {
                    
                     auto it=m.find(arr[i]);
                     m.erase(it);
                     if(m.size()==1)
                     {
                          auto it=m.begin();
                          return it->first;
                     }
                }
                    
            }
        }
        
    }