class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int count=0;
        
        int VERBOSE=1;
        
        vector<char> visited;
        for(int i=0;i<size(s);i++)
        {
            
            char check = s[i];
            
            if(std::find(visited.begin(),visited.end(),check)!=visited.end()){continue;}
            size_t found = s.find(check);
            cout<<"Found at "<<found<<endl;
        if (found != string::npos)
        {
            if(VERBOSE)
            {
                cout<<endl<<" Checking : "<<check<<endl<<" s["<<found<<"]"<<" = "<<s[found]<<" s["<<found +distance[i]+1<<"]"<<" = "<<s[found+distance[i]+1];
            }
            
            if(found+distance[i]+1>=(size(s)-1))
            {
                return false;
            }
            if(s[found]!=s[found+distance[i]+1])
            {
             
                return false;
            }
            else
            {
                visited.insert(visited.end(),check);
            }
        }
            
        }
        return true;
    }
};