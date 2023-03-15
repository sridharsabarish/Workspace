// Source : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> out;
        int max=0;
        for(auto &i:candies)
        {
            max=i>max?i:max;
        }
        for(auto &i:candies)
        {
            if(i+extraCandies>=max)
            {
             out.insert(out.end(),true);
            }
            else
            {
                out.insert(out.end(),false);
            }
        }
        
        return out;
        
    }
};