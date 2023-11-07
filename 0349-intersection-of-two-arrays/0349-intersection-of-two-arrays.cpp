class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
        if(n1>=n2)
            
        { 
        for(int i=0;i<n2;i++)
        {
            
            for(int j=0;j<n1;j++)
            {
                if(nums1[j]==nums2[i])
                {
                    ans.push_back(nums2[i]);
                    break;
                    
                }
            }
        }
        }
        else
        {
        
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums2[j]==nums1[i])
                {
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }
            
            
        }
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        return ans;
        
        
    }
};