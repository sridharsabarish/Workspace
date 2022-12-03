// Solutio Quality : Okayish. Works.
// Source : https://leetcode.com/problems/sort-characters-by-frequency/submissions/
class Solution {
public:
    string frequencySort(string s) {
        set<char> c;
        map<int,vector<char>,std::greater<int>> m;
        int freq;
        for(auto&i:s)
        {
            c.insert(i);
        }
        for(auto&i:c)
        {
            freq=0;
            freq=std::count(s.begin(),s.end(),i);
            vector<char> temp = m[freq];
            temp.insert(temp.end(),i);
            m[freq]=temp;
            for(auto &i:m[freq])
            {
                cout<<i<<" ";
            }
        }
        string out ="";
         map<int, vector<char>>::iterator it;
        for (it = m.begin(); it != m.end(); it++)
        {
            int rep = (*it).first;
            vector<char> c = (*it).second;
            for(auto &j:c)
            for(int i=0;i<rep;i++)
            {

                out+=j;
            }
        }
        return out;
    }
};
