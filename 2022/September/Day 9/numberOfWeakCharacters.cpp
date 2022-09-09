// Source : https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/
// Time limit Exceeded but logic works
class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        set<int> s;
        for(int i=0;i<size(properties);i++)

        {
            for(int j=0;j<size(properties);j++)
            {
                if(i==j){continue;}
                if((properties[j][0]>properties[i][0]) && (properties[j][1]>properties[i][1]))
                {
                    s.insert(i);
                }

            }

        }
        return size(s);

    }
};
