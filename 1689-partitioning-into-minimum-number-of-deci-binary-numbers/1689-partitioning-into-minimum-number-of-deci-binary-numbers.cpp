class Solution {
public:
    int minPartitions(string n) {
        sort(n.begin(),n.end());
        int l= n.length();

            int ascii=n[l-1];
        return ascii-48;

        //convert to integer than rem with 11 10 1 0 if 2 digit  
    
        
    }
};