     //						Ishaan Loves Chocolates

// My Soln
int chocolates(int arr[], int n)
{
    int s=0,e=n-1;
    while(s!=e)
    {
        if(arr[s]>arr[e])
            s+=1;
        else if(arr[e]>arr[s])
            e-=1;
        else
            s+=1;
    }
    return arr[s];
    
}


// this funtion essentially finds the minimum in the array
