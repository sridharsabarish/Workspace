// Source : https://leetcode.com/problems/delete-greatest-value-in-each-row/submissions/
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        int sum=0;
        
        while(size(grid[0])>=1)
        {
             vector<int> each;
            for(int i=0;i<size(grid);i++)
            {
               
                vector<int> tmp=grid[i];
                int max=tmp[0];
                for(auto &j:grid[i])
                {
                    if(j>max)max=j;
                }
                each.insert(each.end(),max);
               
                auto index=std::find(tmp.begin(),tmp.end(),max);
                tmp.erase(index);
                grid[i]=tmp;
                
            }
             sum+=*max_element(each.begin(),each.end());
            
            
        }
        return sum;
    }
};