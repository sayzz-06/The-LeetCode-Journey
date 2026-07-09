class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<=0)
        return false;
        double p=pow(2.0,30.0);
        int s=static_cast<int>(p);
        if(s%n==0)
        return true;
        else
        return false;
    }
};