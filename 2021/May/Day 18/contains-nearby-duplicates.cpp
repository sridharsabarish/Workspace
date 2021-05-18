// Source :https://leetcode.com/problems/contains-duplicate-ii/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

         std::map<int, vector<int>> m;
         for(int i=0;i<size(nums);i++)
         {
            m[nums[i]].insert(m[nums[i]].end(),i);
         }

        for(auto &i:m)
        {
            vector<int> v =i.second;
            if(size(v)>1)
            {
                for(int n=0;n<size(v)-1;n++)
                {
                    for(int l=n+1;l<size(v);l++)
                    {
                        if( abs(v[n]-v[l])<=k)
                        {
                            return true;
                        }
                    }
                }

            }

        }
     return false;
    }
};
