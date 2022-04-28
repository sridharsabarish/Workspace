// Source : https://leetcode.com/problems/valid-anagram/submissions/
class Solution {
public:

    map<char,int> m1;
    map<char,int> m2;


    bool isAnagram(string s, string t) {

        if(size(s)!=size(t)){return false;}
        for(auto&i:s)
        {
            m1[i]+=1;
        }

        for(auto&i:t)
        {
            m2[i]+=1;
        }


        for(auto&i:s)
        {
            if(m1[i]!=m2[i])
            {
                return false;
            }
        }
        return true;

    }
};
