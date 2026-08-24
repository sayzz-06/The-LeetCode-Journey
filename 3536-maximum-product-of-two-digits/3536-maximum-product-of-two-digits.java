class Solution {
    public int maxProduct(int n)
    {
       int m1=0;
        int m2=0;
        int b;
        while(n!=0)
        {
            b=n%10;
            if(b>m1)
            {
                m1=b;
            }
             if(b>m2)
            {
                m1=m2;
                m2=b;
            }
            n=n/10;
        }
        return m1*m2;
    }
}