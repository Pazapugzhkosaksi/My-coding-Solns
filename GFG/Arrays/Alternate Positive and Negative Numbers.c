// Successful Approach
T.C = O(N)
S.C = O(N)
void rearrange(int arr[], int n) {
	    int neg[n],pos[n];
	    memset(neg,0,n*sizeof(int));
	    memset(pos,0,n*sizeof(int));
	    int c1=0,c2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            neg[c1]=arr[i];
	            c1++;
	        }
	        else
	        {
	            pos[c2]=arr[i];
	            c2++;
	        }
	    }
	    
	    if(c1!=0 && c2!=0) // c1==0 || c2==0 do nothing
	    {
    	    int flag=0;
    	    arr[0]=pos[0];
    	    int c=1;
    	    int i=0,j=1;
    	    while(i<c1 && j<c2)
    	    {
    	        if(!flag)
    	        {
    	            arr[c]=neg[i];
    	            i++;
    	            c++;
    	        }
    	        else{
    	            arr[c]=pos[j];
    	            j++;
    	            c++;
    	        }
    	        flag=!flag;
    	    }
    	    while(i<c1)
    	    {
    	        arr[c]=neg[i];
    	        i++;
    	        c++;
    	    }
    	    while(j<c2){
    	        arr[c]=pos[j];
    	        j++;
    	        c++;
    	    }
	    }
	}