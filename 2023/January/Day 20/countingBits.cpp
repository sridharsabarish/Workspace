// Source : https://leetcode.com/problems/counting-bits/submissions/
class Solution {
public:
    int getOnes(int n)
    {
        int count=0;
        while(n)
        {
            if(n%2==1)
            {
                count++;
            }
            n/=2;
        }
        return count;
        
    }
    
    vector<int> countBits(int n) {
        vector<int> out;
        int counter=0;
        while(counter<=n)
        {
            out.insert(out.end(),getOnes(counter++));
        }
        return out;

        
        
    }
};