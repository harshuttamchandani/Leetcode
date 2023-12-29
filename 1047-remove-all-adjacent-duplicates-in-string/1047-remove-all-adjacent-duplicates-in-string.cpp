class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        
        for(int i=0;i<=s.length()-1;i++)
        {
            int x=ans.length();
            if((x>0) && ans[x-1]==s[i])
            {
                ans.pop_back();
            }
            else
            {
                char a=s[i];
                ans.push_back(a);
            }
            
        }

        return ans;
    }
};