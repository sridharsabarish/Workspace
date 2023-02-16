// Source : https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/submissions/
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       
       vector<vector<int>> out;
    map<int,vector<int>> m;
    
    for(int i=0;i<size(groupSizes);i++)
    {
        m[groupSizes[i]].insert(m[groupSizes[i]].end(),i);
    }
        
        for (const auto& kx: m) {
	//std::cout <<endl<< "Key: " << kx.first << " Value: " ;
    vector<int> tmp;
    
        
        int counter=0;
        for(auto&i:kx.second)
        {
            cout<<i<<" ";
            if(counter<kx.first)
            {
                tmp.insert(tmp.end(),i);
            }
            else
            {
                out.insert(out.end(),tmp);
                tmp = {};
                counter=0;
                tmp.insert(tmp.end(),i);
            }
            counter++;
        }
        out.insert(out.end(),tmp);
    
        }
        return out;
    }
};