


// Passed all test cases but not optimal to constraints
int transitionPoint(int arr[], int n) {
    int a=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            a=i;
            break;
        }
    }
    return a;
}

 // Binary search can be tweaked to obtain the solution with the required constraints. 
 // Revisit and then check if it works