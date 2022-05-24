// Successful but not the right approach
void SortedStack :: sort()
{
    vector<int>a;
    while(!s.empty())
    {
        a.push_back(s.top());
        s.pop();
    }
    std::sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        s.push(a[i]);
    }
}