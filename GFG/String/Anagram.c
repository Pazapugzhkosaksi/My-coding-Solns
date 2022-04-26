// uses two arrays
bool isAnagram(char a[], char b[]){
    int counts1[26];
    int counts2[26];
    memset(counts1,0,26*sizeof(int));
    memset(counts2,0,26*sizeof(int));
    int i=0,j=0;
    while(a[i]!='\0')
    {
        counts1[a[i]-'a']+=1;
        i+=1;
    }
    while(b[j]!='\0')
    {
        counts2[b[j]-'a']+=1;
        j+=1;
    }
    if(i!=j)
    {
        return false;
    }
    else
    {
        for(int c=0;c<i;c++)
        {
            if(counts1[a[c]-'a']!=counts2[a[c]-'a'])
                return false;
        }
        return true;
    }
    
}

// Space Optimized than above approach
// Uses only one array
    
    bool isAnagram(char a[], char b[]){
    int counts[26];
    memset(counts,0,26*sizeof(int));
    int i=0,j=0;
    while(a[i]!='\0')
    {
        counts[a[i]-'a']+=1;
        i+=1;
    }
    while(b[j]!='\0')
    {
        counts[b[j]-'a']-=1;
        j+=1;
    }
    if(i!=j)
    {
        return false;
    }
    else
    {
        for(int c=0;c<26;c++)
        {
            if(counts[c]!=0)
                return false;
        }
        return true;
    }
    
}