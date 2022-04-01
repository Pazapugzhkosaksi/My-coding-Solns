 
// Passed All test cases but unsure of time complexity.
 int bs(int a[],int x,int l, int h)
    {
        int m=(l+h)/2;
        while(l<=h)
        {
            if(a[m]==x)
                return m;
            else if(a[m]>x)
                return bs(a,x,l,m-1);
            else
                return bs(a,x,m+1,h);
        }
        return -1;
    }
    
    int search(int arr[], int l, int h, int x){
        int l1=0,l2=0,h1=0,h2=h-1;
        int i=h-1;
        while(arr[i-1]<arr[i])
        {
            i-=1;
        }
        l2=i;
        h1=i-1;
        // cout<<l1<<" "<<h1<<endl;
        // cout<<l2<<" "<<h2<<endl;
        int a1=bs(arr,x,l1,h1);
        if(a1!=-1)
            return a1;
        else
            return bs(arr,x,l2,h2);
    }

    // Other's Soln

    while(low<=high) {
     int mid = (low+high)/2;
     if(nums[mid]==key) return mid;
     else if (nums[mid] >= nums[low]) { 
      if(key>=nums[low] and key<=nums[mid]) {
        high=mid-1;
      } else {
        low=mid+1;
      } 
     }  else {
        if(key>=nums[mid] and key<=nums[high]) {
          low=mid+1;
        } else {
          high=mid-1;
        }
     }
    }
    return -1;
   