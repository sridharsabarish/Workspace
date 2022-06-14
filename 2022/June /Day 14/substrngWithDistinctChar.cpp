// Source : https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/submissions/
class Solution {
public:

    bool isUnique(string s)
    {
        for(auto&i:s)
        {
            if(std::count(s.begin(),s.end(),i)!=1)
            {
                return false;
            }
        }
        return true;
    }
    int countGoodSubstrings(string s) {

        if(size(s)<3){
            return 0;
        }
        int count=0;
        string tmp="";
        for(int i=0;i<size(s)-2;i++)
        {
          for(int j=i;j<i+3;j++)
          {
              tmp+=s[j];
          }
        if(isUnique(tmp)){count++;}
        tmp="";

        }

        return count;

    }
};
