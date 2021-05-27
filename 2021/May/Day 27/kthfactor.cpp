// Source : https://leetcode.com/problems/the-kth-factor-of-n/submissions/
class Solution {
public:
    int kthFactor(int n, int k) {

        vector<int> f;

        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                f.insert(f.end(),i);
            }
        }

        if(size(f)>=k)
        {
            return f[k-1];
        }
        return -1;

    }
};
