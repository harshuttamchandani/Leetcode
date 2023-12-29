class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int pos=s.find(part);
        while(pos!=string::npos)
        {
            int n=part.length();
            s.erase(pos,n);
            pos=s.find(part);
        }
        return s;
    }
};