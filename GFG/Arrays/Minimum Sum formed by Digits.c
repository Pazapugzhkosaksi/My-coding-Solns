// Successful and Optimal Approach
// T.C O(N*Log(N)) S.C O(N)
long long int minSum(int arr[], int n)
{
        
    sort(arr,arr+n);
    long long num1=0,num2=0;
    for(int i=0;i<n;i+=2){
        num1=(num1*10)+arr[i];
    }
    for(int i=1;i<n;i+=2){
        num2=(num2*10)+arr[i];
    }
    return num1+num2;
}