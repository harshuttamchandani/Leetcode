class Solution {
public:
    string finalString(string s) {
        int i=0;
        string str;
        for(;i<s.length();i++)
        {
            if(s[i]=='i')
            {
                reverse(str.begin(),str.end());
                
            }
            else
            {
                str.push_back(s[i]);
            }
        }
        
        return str;
        
    }
};