class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        cout<<sentence<<endl;
        sentence.erase(unique(sentence.begin(), sentence.end()), sentence.end());
        char a='a';
        if(sentence.length()!=26)
        {
            return false;
        }

        cout<<sentence<<endl;
        for(int i=0;i<sentence.length();i++)
        {

            if(sentence[i]==a)
            {
            a++; 
            cout<<a;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};