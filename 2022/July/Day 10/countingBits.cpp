// Source : https://leetcode.com/problems/counting-bits/submissions/
class Solution {
public:

    int retBin(int n)
    {
        int count=0;
        while(n)
        {
            count=n%2==1?count+1:count;
            n/=2;
        }
        return count;

    }

    vector<int> countBits(int n) {

        vector<int> out;
        for(int i=0;i<=n;i++)
        {
            out.insert(out.end(),retBin(i));
        }
        return out;

    }
};
