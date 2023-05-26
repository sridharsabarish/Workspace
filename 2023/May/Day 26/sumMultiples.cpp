// Source : https://leetcode.com/problems/sum-multiples/submissions/
class Solution {
public:
    
    bool checkMultiples(int i, vector<int> allowed)
    {
        
        for(auto &j:allowed)
        {
            if(i%j==0)return true;
        }
        return false;
    }
    
    int sumOfMultiples(int n) {
        vector<int> allowed={3,5,7};
        int sum=0;
        
        for(int i=1;i<=n;i++)
        {
            if(checkMultiples(i,allowed))
                sum+=i;
        }
        return sum;
    }
};