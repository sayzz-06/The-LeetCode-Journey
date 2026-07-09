class Solution {
public:
    int strStr(string h, string ned)
    {
        int c=0,m,n,i;
        string str1;
        m=h.length();//longer
        n=ned.length();//shorter
        for(i=0;i<m;i++)
        {
            str1=h.substr(i,n);
            if(str1 == ned)
            {
                 c++;
                 break;
            }
        }
        if(c==1)
        return i;
        else 
        return -1;
    }
};