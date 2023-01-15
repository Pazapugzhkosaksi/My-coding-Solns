// Based on Striver's approach
class Solution
{
    struct meeting{
        int start;
        int end;
        int pos;
    };
    public:
   
    static bool compare(struct meeting m1,struct meeting m2){
        if(m1.end<m2.end)
            return true;
        else if(m1.end>m2.end)
            return false;
        else if(m1.pos<m2.pos)
            return true;
        return false;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<int> ans;
        struct meeting meetings[n];
        for(int i=0;i<n;i++)
        {
            meetings[i].start=start[i];
            meetings[i].end=end[i];
            meetings[i].pos=i+1;
        }
        
        sort(meetings,meetings+n,compare);
        
        
        int prev_meeting_end=meetings[0].end;
        ans.push_back(meetings[0].pos);
        
        for(int i=1;i<n;i++)
        {
            if(meetings[i].start>prev_meeting_end){
                ans.push_back(meetings[i].pos);
                prev_meeting_end=meetings[i].end;
            }
        }
        return ans.size();
    }
};