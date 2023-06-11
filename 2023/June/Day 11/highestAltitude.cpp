// Source : https://leetcode.com/problems/find-the-highest-altitude/submissions/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int maxAltitude=0;
     int currentAltitude=0;
     for(auto&i:gain)
     {
         currentAltitude+=i;
         if(currentAltitude>maxAltitude)maxAltitude=currentAltitude;
     }
        return maxAltitude;
    }
};