//Source : https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
    int count=0;

        for(auto&p:patterns)
        {
            for(int i=0;i<size(word);i++)
            {
                int f=0;
                for(int j=0;j<size(p);j++)
                {
                    if(word[i+j]!=p[j])
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0){count++; break;}

            }

        }
        return count;
    }
};
