class Solution {
public:
    string removeDuplicates(string s) {
        string ans=" ";
        
        for(int i=0;i<=s.length()-1;i++)
        {
            int x=ans.length()-1;
            if(ans[x]==s[i])
            {
                ans.pop_back();
            }
            else
            {
                char a=s[i];
                ans.push_back(a);
            }
            
        }
        ans.replace(0,1,"");
        return ans;
    }
};