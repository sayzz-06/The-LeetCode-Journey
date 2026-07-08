class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int i,c=0,ans=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c++;
                ans=max(c,ans);
            }
            else
            c=0;
        }
        return ans;
    }
};