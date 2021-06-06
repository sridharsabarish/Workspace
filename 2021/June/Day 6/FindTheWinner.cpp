// source : https://leetcode.com/problems/find-the-winner-of-the-circular-game/submissions/
class Solution {
public:
    int findTheWinner(int n, int k) {

        vector<int> v;

        for(int i=1;i<=n;i++)
        {
            v.insert(v.end(),i);
        }
        int start = 0;
        while(size(v)>1)
        {
            int del = (start+k-1)%size(v);
            start = del;
            v.erase(v.begin() + del);
        }

        return v[0];

    }


};
