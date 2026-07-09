class Solution {
public:
    bool isPowerOfThree(int n)
    {
        if(n==0 || n<0)
        return false;
        double p=pow(3.0,19.0);
        int s=static_cast<int>(p);
        if(s%n==0)
        return true;
        else
        return false;
    }
};