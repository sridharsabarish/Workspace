// Source : https://leetcode.com/problems/jewels-and-stones/submissions/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(auto &i:stones)
        {
            if(std::find(jewels.begin(),jewels.end(),i)!=jewels.end())
            {
                count++;
            }
        }
        return count;
    }
};
