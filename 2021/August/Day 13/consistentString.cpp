class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int count =0;
        int f=0;
        for(auto &i:words)
        {
            f=0;
            for(auto&j:i)
            {
             if (allowed.find(j) == std::string::npos)
             {
                 f=1;
                 break;
             }
            }
            if(f==0)
            {
                count+=1;
            }

        }
        return count;
    }
};
