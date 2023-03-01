// SOurce : https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/submissions/
// Incomplete
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        sort(deck.begin(),deck.end());
        map<int,int> m;
        for(auto&i:deck)
            m[i]+=1;
        
        int num=-1;
        
        for ( const auto &p : m )
        {
           if(num==-1)
           {
               num=p.second;
           }
            else
            {
                if(num!=p.second)
                {
                    return false;
                }
            }
           
        
        }
        return true;
        
        
    }
};