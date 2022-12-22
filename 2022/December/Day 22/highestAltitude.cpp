// Source : https://leetcode.com/problems/find-the-highest-altitude/submissions/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int rs=0;
      int max=0;
      for(auto&i:gain)
      {
          rs+=i;
          if(rs>max)
          {
              max=rs;
          }
       }
        return max;
    }
};
