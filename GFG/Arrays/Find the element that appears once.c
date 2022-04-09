// Successful Approach but takes O(N) time
int search(int A[], int N){
	   int s=A[0];
	   for(int i=1;i<N;i++)
	   {
	       s=s^A[i];
	   }
	   return s; 
	}

 // O(log N) approach

 	   int s = 0;
       int e = N - 1;
       if (N == 1) {
           return A[0];
       }
       if (A[0] != A[1]) {
           return A[0];
       } else if (A[N - 1] != A[N - 2]) {
           return A[N - 1];
       }
       while (s <= e) {
           int mid = s + (e - s) / 2;
           if (A[mid] < A[mid + 1] && A[mid] > A[mid - 1]) {
               return A[mid];
           } else if ((A[mid] == A[mid + 1] && (mid) % 2 == 0)
                   || (A[mid] == A[mid - 1] && (mid - 1) % 2 == 0)) {
               s = mid + 1;
           } else {
               e = mid - 1;
           }
       }
       return -1; 