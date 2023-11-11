class Solution {
public:
    int balancedStringSplit(string s) {
        
        int ans=0;
        int rc=0;
        int lc=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
                rc++;
            else
                lc++;
                
            if(rc==lc)
                ans++;
        }
        return ans;
        
    }
};