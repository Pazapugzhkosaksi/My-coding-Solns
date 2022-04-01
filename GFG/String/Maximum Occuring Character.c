

// My Soln
    int largest(int arr[], int n)
        {
        int i;
         
        // Initialize maximum element
        int max = arr[0];
        int index=0;
        // Traverse array elements
        // from second and compare
        // every element with current max
        for (i = 1; i < n; i++)
            if (arr[i] > max)
            {
                max = arr[i];
                index=i;
            }
     
        return index;
        }
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int counts[26];
        memset(counts,0,sizeof(counts));
        for(int i=0;i<str.length();i++)
        {
            counts[tolower(str[i])-'a']+=1;
        }
        int j=largest(counts,26);
        //cout<<j<<"\n";
        char c=(char)j+'a';
        return c;
        
    }
