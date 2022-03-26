// Source : https://leetcode.com/problems/find-the-highest-altitude/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int maxs=0;

        int rs=0;
        for(auto&i:gain)
        {
            rs+=i;
            maxs=rs>maxs?rs:maxs;
        }
        return maxs;

    }
};
