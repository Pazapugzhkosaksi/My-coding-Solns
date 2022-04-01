										//    Counting Zeros in array where 1s are placed first followed by zeros

// My approach
    
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==0)
                c+=1;
            if(arr[i]==1)
                break;
        }
        return c;


													//  Alternative Approaches 

// #1

        int i = 0;
      	while(arr[i] == 1) {
          i++;
      	}
      	return n - i;

 
 // #2

      	int count = 0;
        for (int i = 0; i<n; i++)
        {
            if (arr[i] == 0)
            {
                count = n - i;
                break;
            }
        }
        return count;



        