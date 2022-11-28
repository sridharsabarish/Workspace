// Status : Time Limit Exceeded, Incomplete
// Source : https://leetcode.com/problems/find-players-with-zero-or-one-losses/submissions/
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        set<int> players;
        vector<int> losers;

        for(auto&i:matches)
        {
            players.insert(i[0]);
            players.insert(i[1]);
            losers.insert(losers.end(),i[1]);
        }

        vector<int> noLoss,oneLoss;

        for(auto&i:players)
        {
            if(std::find(losers.begin(),losers.end(),i)==losers.end())
            {
                noLoss.insert(noLoss.end(),i);

            }
            if(std::count(losers.begin(),losers.end(),i)==1)
            {
                oneLoss.insert(oneLoss.end(),i);
            }

        }
        //cout<<size(players);
        return {noLoss,oneLoss};
    }
};
