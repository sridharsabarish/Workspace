// Source : https://leetcode.com/problems/find-original-array-from-doubled-array/submissions/
// Quality : Bad. Time limit Exceeded
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        vector<int> out;
        if(size(changed)%2!=0){return out;}

        vector<int> visited;
     for(int i=0;i<size(changed);i++)
     {
         for(int j=i+1;j<size(changed);j++)
         {
             if(i==j){continue;}
             if(std::find(visited.begin(),visited.end(),j)!=visited.end())
             {
                 continue;
             }
             if(std::find(visited.begin(),visited.end(),i)!=visited.end())
             {
                 continue;
             }
             if(changed[j]==2*changed[i])
             {
                 visited.insert(visited.end(),i);
                 visited.insert(visited.end(),j);
                 out.insert(out.end(),changed[i]);
             }

         }
     }
        if(size(out)!=size(changed)*0.5){return {};}

        return out;
    }
};
