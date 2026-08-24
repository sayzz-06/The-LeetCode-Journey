class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i;
        string ls="";
        string ts="";
        bool t=false;
        if(s.empty())
        return 0;
        int l=s.length();
        i=0;
        while(i<l)
        {
            for(int j=0;j<ts.length();j++)
            {
                if(s[i]==ts[j])
                t=true;
            } 
            if(t==false)
            {
                ts=ts+s[i];
                i=i+1;
            }
            else
            {
                ts=ts.substr(1,ts.length()-1);
            }
            if(ls.length()<ts.length())
            ls=ts;
        t=false;
        }
       
        return ls.length();
    }
};