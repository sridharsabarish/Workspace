class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        vector<int> visited;

        for(auto &i :nums)
        {
            if(std::find(visited.begin(),visited.end(),i)!=visited.end())
            {
                return true;
            }
            visited.insert(visited.end(),i);
        }
        return false;
    }
};
