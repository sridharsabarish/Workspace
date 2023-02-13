// Source : https://leetcode.com/problems/sort-integers-by-the-power-value/submissions/
class Solution {
public:
    int getPower(int n,int step=-1)
    {
    step++;
        
        if(n==1)
        {
            return step;
        }
        
        else if(n%2==0)
        {
            return getPower(n/2,step);
        }
        
        else if(n%2==1)
        {
            
            return getPower(3*n + 1,step);
        }
        return step;
    }
    int getKth(int lo, int hi, int k) {
    
    map<int,vector<int>,std::less<int>> m;
    int temp=0;
    for(int i=lo;i<=hi;i++)
    {
        
       temp=getPower(i);
       m[temp].insert(m[temp].end(),i);
        
    }
     
    int count=0;
     for (const auto &ele : m) 
     {
         
         cout<<" : "<<ele.first<<" ";
         vector<int> out = ele.second;
         sort(out.begin(),out.end());
         for(auto &i:out)
         {
         count++;
             if(count==k)
             {
                 return i;
             }
         }

    }
        
      return -1;
    }
};