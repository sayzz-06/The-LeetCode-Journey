class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ans;
        int i,j,m,n,s=0;
        m=nums1.size();
        n=nums2.size();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(nums1[i]==nums2[j])
                {
                ans.push_back(nums2[j]);
                nums2[j]=INT_MIN;//marked as done
                break;
                }
            }
        }
        return ans;
    }
};