// Successful Approach 
// Optimal approach in terms of space O(str1+str2)
// Not optimal in terms of space O(number of distinct characters)

bool areIsomorphic(string str1, string str2)
{
    int counts[26];
    memset(counts,0,sizeof(int)*26);
    map<char,char> mp;
    if(str1.length()!=str2.length())
       return false;
    for(int i=0;i<str1.length();i++)
    {
        if(mp.find(str1[i])!=mp.end())
        {
            if(mp[str1[i]]!=str2[i])
                return false;
        }
        else{
            if(counts[str2[i]-'a']==1)
                return false;
            mp[str1[i]]=str2[i];
            counts[str2[i]-'a']=1;
        }
    }
    return true;
}

 // Peer Approach but not optimal interms of space
bool areIsomorphic(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    //corner case
    if(n1 != n2)
        return false;

    unordered_map<char, int> mp1,mp2;
    for(int i=0;i<n1;i++)
    {
        mp1[str1[i]] = i+1;
        mp2[str2[i]] = i+1;
    }
    
    for(int i=0;i<n1;i++)
    {
        if(mp1[str1[i]] != mp2[str2[i]])
            return false;
    }
    return true;
}

// GFG Soln
bool areIsomorphic(string str1, string str2)
{
    int m = str1.length(), n = str2.length();
    if (m != n)
        return false;

    bool marked[256] = { false };

    int map[MAX_CHARS];
    memset(map, -1, sizeof(map));

    // Process all characters one by on
    for (int i = 0; i < n; i++) {
        if (map[str1[i]] == -1) {

            if (marked[str2[i]] == true)
                return false;

            marked[str2[i]] = true;
            map[str1[i]] = str2[i];
        }

        else if (map[str1[i]] != str2[i])
            return false;
    }
    return true;
}

