// Naive Pattern Matching Algorithm

// Worst Case Time Complexity(O(n-m+1)*m)		Happens when all the characters in both the strings are same.
// Best  Case Time Complexity O(n)				Happens when no character in pattern matches the character in string
bool searchPattern(string str, string pat)
{
    int N=str.length();
    int M=pat.length();
    int j;
    for(int i=0;i<=N-M;i++)
    {
        for(j=0;j<M;j++)
        {
            if(str[i+j]!=pat[j])
                break;
        }
        if(j==M)
            return 1;
    }
    return 0;
}