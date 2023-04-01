// Successful and Optimal Approach
// T.C O(NLogN) S.C O(N)
string caseSort(string str, int n)
{
    string str1=str;
    sort(str.begin(),str.end());
    vector<char> lc,uc;
    int i=0;
    while(str[i]>=65 && str[i]<=90){
        uc.push_back(str[i]);
        i++;
    }
    while(i<n){
        lc.push_back(str[i]);
        i++;
    }
    string res="";
    int ind1=0,ind2=0;
    for(int i=0;i<str1.length();i++)
    {
        if(islower(str1[i]))
        {
            res+=lc[ind1];
            ind1++;
        }
        else{
            res+=uc[ind2];
            ind2++;
        }
    }
    return res;
}