// Source : https://leetcode.com/problems/sort-the-students-by-their-kth-score/submissions/
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
    map<int,vector<int>,std::greater<int>> m;
        
    for(auto &i:score)
    {
        m[i[k]]=i;
        
    }
        
    vector<vector<int>> out;
    
      for (const auto& p : m)
      out.insert(out.end(),p.second);
    return out;
        
        
        
    }
};