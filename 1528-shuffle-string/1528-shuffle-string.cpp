class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for(int i=0;i<indices.size();i++)
        {
            int c=indices[i];
            ans[c]=s[i];
            cout<<ans<<" " ;
        }
        return ans;
    }
};