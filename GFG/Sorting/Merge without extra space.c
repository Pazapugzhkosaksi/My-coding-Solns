// Striver Approach but not successful but need to find out why this approach doesnot work

void swap(long long  *a,long long *b)
        {
            int t= *a;
            *a=*b;
            *b=t;
        }

        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n1, int n2) 
        { 
            long long n=n1+n2;
            long long g=ceil(n/2);
            long long *elem1,*elem2;
            cout<<g<<endl;
            while(g>=1)
            {
                int s=0;
                elem1=&arr1[s];
                int e=g-1;
                if(e>=n1-1)
                    elem2=&arr2[e-(n1-1)];
                else
                    elem2=&arr1[e];
                while(e<n-1){
                    
                    if(s>n1-1){
                        elem1=&arr2[s-(n1-1)];
                    }
                    else{
                        elem1=&arr1[s];    
                    }
                    
                    if(e>=n1-1){
                        elem2=&arr2[e-(n1-1)];
                    }
                    else{
                        elem2=&arr2[e];
                    }
                    //we need to compare elements and not addresses
                    if(*elem1>*elem2)
                    {
                        swap(elem1,elem2);
                    }
                    s++;
                    e++;
                }
                for(int i=0;i<n1;i++)
                    cout<<arr1[i]<<" ";
                for(int i=0;i<n2;i++)
                    cout<<arr2[i]<<" ";
                cout<<endl;
                // cout<<"g:"<<g<<endl;
                g=g/2;
            }
            
          //  for iterating through the first array
            long long ns=0,ne=1;
            while(ne<=n1-1){
                if(arr1[ns]>arr1[ne])
                {
                    swap(&arr1[ns],&arr1[ne]);
                }
                ns+=1;
                ne+=1;
            }
            if(arr1[ns]>arr2[0])
                swap(&arr1[ns],&arr2[0]);
            ns=0;ne=1;
            while(ne<=n2-1){
                if(arr2[ns]>arr2[ne])
                {
                    swap(&arr2[ns],&arr2[ne]);
                }
                ns+=1;
                ne+=1;
            }
                        
} 

// Successful Approach based on GFG

void merge(long long arr1[], long long arr2[], int n, int m) 
{ 
    int i=0,j=0,k=n-1;
    while(i<=k && j<m)    			// i<=k is a better solution as compared to i<n because 
    {					 			// it is meaningless to iterate through the rest of the array
       if(arr1[i]<=arr2[j])		    // after the first n necessary elements have been swapped 
           i++;
       else
           swap(arr1[k--],arr2[j++]);              
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
               
}