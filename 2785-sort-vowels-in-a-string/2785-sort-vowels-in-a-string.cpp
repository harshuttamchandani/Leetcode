class Solution {
public:
    string sortVowels(string str) {
        string vowels;
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o' ||str[i]=='u')
            {
                vowels.push_back(str[i]);
            }
        }
        sort(vowels.begin(),vowels.end());
        int k=0;
       
         for(int i=0;i<str.length();i++)
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o' ||str[i]=='u')
            {
                str[i]=vowels[k];
                k++;
            }
        }
        return str;
        
    }
};