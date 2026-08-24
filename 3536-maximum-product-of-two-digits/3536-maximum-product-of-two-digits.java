class Solution {
    public int maxProduct(int n)
    {
       int m1=0;
        int m2=0;
        int b;
        while(n!=0)
        {
            if((n%10)>m1)
            {
                m1=(n%10);
            }
             if((n%10)>m2)
            {
                m1=m2;
                m2=(n%10);
            }
            n=n/10;
        }
        return m1*m2;
    }
}