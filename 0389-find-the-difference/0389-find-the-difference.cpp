class Solution {
public:
    char findTheDifference(string s, string t)
    {
        char a,b;
        int m,n,i,j,c=0;
        m=s.length();
        n=t.length();
        for(i=0;i<n;i++)//for t
        {
            a=t[i];
            for(j=0;j<m;j++)
            {
                b=s[j];
                if(b==a)
                {
                c++;
                s[j]='#';//terminating
                break;
                }
            }
            if(c==0)
            return a;
            c=0;
        }
        return {};
    }
};