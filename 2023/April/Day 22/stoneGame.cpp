// Source : https://leetcode.com/problems/stone-game/submissions/
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int alice=0;
        int bob=0;
        while(!piles.empty())
        {
            alice+=piles.back();
            piles.pop_back();
            bob+=piles.back();
            piles.pop_back();
        }
        
        return alice>bob;
    }
};