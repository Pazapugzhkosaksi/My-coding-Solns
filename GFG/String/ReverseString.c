
// My new Approach

	char arr[str.length()+1];    //Declaring a character array
    strcpy(arr,str.c_str()); /// c_str converts string to character array
    string s;
    for (int i=str.length()-1;i>=0;i--)
    {
        s.push_back(arr[i]);                // push_back function inserts characters into the string 's'
    }
    //cout<<c<<endl;
    return s;


Reverse(N.begin(),N.end())
