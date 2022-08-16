// Source : https://leetcode.com/problems/sort-characters-by-frequency/submissions/
class Solution {
public:
    string frequencySort(string s) {

        map<char,int> m;

        set<char> se;

        for(auto&i:s)
        {
            m[i]+=1;
            se.insert(i);
        }




        //     for(auto&i:se)
        // {
        //     cout<<m[i]<<":"<<i<<endl;
        // }

        map<int,vector<char>,std::greater<int>> out;

        for(auto &i:se)
        {
            out[m[i]].insert(out[m[i]].end(),i);
        }


        string tmp="";
        vector<char> v;

        for ( const auto &myPair : out ) {
            v=myPair.second;
            int it=myPair.first;
            for(auto&i:v)
            {
                for(int j=0;j<it;j++)
                    tmp+=i;
            }
    }

        return tmp;







    }
};
