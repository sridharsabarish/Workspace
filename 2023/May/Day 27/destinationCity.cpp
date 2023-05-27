// Source : https://leetcode.com/problems/destination-city/submissions/
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> m;
        string start="";
        int VERBOSE=0;
        for(auto&p:paths)
        {
            if(start=="")
                start=p[0];
            
            if(VERBOSE)
            cout<<p[0]<<" : "<<p[1]<<endl;
            m[p[0]]=p[1];
        }
        
        
        
        while(true)
        {
        if(size(m[start])>0)
        {
            if(VERBOSE)
            cout<<" "<<m[start];
            start=m[start];
            
        }
            else{
            break;
            }
        }
        return start;
       
    }
};