// Source : https://leetcode.com/problems/maximum-ice-cream-bars/submissions/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        std::sort(costs.begin(),costs.end());
        if(coins<costs[0])
        {
            return 0;
        }
        int cumSum=0;
        vector<int> c;
        int index =0;
        for(auto &i:costs)
        {
            if(i<=coins)
            {
                coins = coins-i;
            }
            else
            {
              break;
            }

            index = index+1;
        }

        return index;
    }
};
