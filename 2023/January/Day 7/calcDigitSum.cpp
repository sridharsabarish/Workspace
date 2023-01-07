// Source : https://leetcode.com/problems/calculate-digit-sum-of-a-string/submissions/
class Solution {
public:
    string digitSum(string s, int k) {
        int total=0;
        int VERBOSE=0;
        while(size(s)>k)
        {
            
            vector<int> sts;
            
            string temp="";
            for(int i=0;i<size(s);i+=k)
            {
                int sum=0;
                for(int j=i;j<i+k;j++)
                {
                    if(j>=size(s))break;
                    sum+=int(s[j]-48);
                    
                }
                sts.insert(sts.end(),sum);
                
               
                
            }
            
            for(auto&i:sts)
            {
                temp+=to_string(i);
            }
            if(VERBOSE)
            cout<<temp<<" ";
            s=temp;
            
            
            
        }
        
        
    return s;
    }
};