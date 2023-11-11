class Solution {
public:
    string interpret(string str) {
        string ans;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='G')
            {
                ans.push_back(str[i]);
            }
            else if(str[i]=='('&&str[i+1]==')')
            {
                ans.push_back('o');
            }
            else if(str[i]=='('&&str[i+1]=='a')
            {
                ans.push_back('a');
                ans.push_back('l');
            }
        }
        return ans;
        
    }
};