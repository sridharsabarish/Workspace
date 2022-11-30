// Source : https://leetcode.com/problems/unique-number-of-occurrences/submissions/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        map<int,int> m1;
        map<int,int> m2;
        for(auto&i:arr)
        {
            m1[i]+=1;
        }

        for (const auto &[key, value]: m1 ) {
       if(m2[value]!=0)
       {
           return false;
       }
            else
            {
                m2[value]=key;
            }
    }
        return true;

    }
};
