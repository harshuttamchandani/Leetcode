class Solution {
public:
    int checkpallindrome(string t)
        {
        
            
            int i=0;
            int j=t.length()-1;
            while(i<=j)
            {
                if(t[i]!=t[j])
                {
                    return 0;
                   
                }
                 i++;
                j--;
               
            }
        //cout<<t<<" ";
             return 1;
        }
    
    int countSubstrings(string s) {
        int ans=0;
        
        
        for(int i=0;i<s.length();i++)
        {
            string t="";
            for(int j=i;j<s.length();j++)
            {
                t+=s[j];
                //cout<<t<<" ";
                int f=checkpallindrome(t);
                if(f==1)
                {
                    //cout<<t<<" ";
                    ans=ans+1;
                    //cout<<ans; 
                }
            }
        }
        return ans;
    }
};