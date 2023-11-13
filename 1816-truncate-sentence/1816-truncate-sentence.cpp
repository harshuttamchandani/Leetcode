class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0;
        int count=0;
        string ans;
        while(count<k && i<s.length())
        {
           
            if(s[i]==' ')
            {
                count++;
            }
            if(count!=k){
                 ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};