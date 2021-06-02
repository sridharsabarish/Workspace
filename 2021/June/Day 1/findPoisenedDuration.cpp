// Source: https://leetcode.com/problems/teemo-attacking/
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count =0;
        int ptill=0;

        for(auto &i:timeSeries)
        {
            if(i>ptill){count+=duration;}
            else{count+=duration-(ptill-i);}
            ptill = i+duration;
        }
        return count;
    }
};
