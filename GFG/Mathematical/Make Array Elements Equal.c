// Successful Approach based on youtube
long long int minOperations(int n) {
        /* Sum of this AP is N*N
         But we need only half of this array
         So sum of half of the AP will be (N/2)*(N/2) = (N*N)/4
        */
        return ((long long) n*n)/4;
}

// For Reference https://www.youtube.com/watch?v=dOehQWVwKmg