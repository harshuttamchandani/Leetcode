class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int index=-1;
        int ans=0;
        if(ruleKey == "type")
        {
            index=0;
        }
        else if(ruleKey == "color")
        {
            index=1;
        }
        else
        {
            index=2;
        }
            
        for(int j=0;j<items.size();j++)
        {
            if(items[j][index]==ruleValue)
                ans++;
        }
        return ans;
    
        
    }
};