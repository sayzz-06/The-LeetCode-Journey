class Solution {
public:
    bool isHappy(int n)
    {
        int temp=n;
        int b,c=0,sum=0;
    if(temp==1)
    return true;
        do 
        {
            while(n!=0)
            {
             b=n%10;
             sum=sum+b*b;
             n=n/10;
            }
            if(sum==1)
            return true;
            n=sum;
            sum=0;
        }while(n>5);
        return false;
    
    }
        
};