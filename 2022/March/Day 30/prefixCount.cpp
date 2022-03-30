// Source : https://leetcode.com/problems/counting-words-with-a-given-prefix/submissions/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0; int f;
        for(auto&i:words)
        {
            f=0;
            for(int j=0;j<size(pref);j++)
            {
                if(pref[j]!=i[j]){
                    f=1;
                    break;
                }
            }
            if(f==0){count++;}

        }
        return count;
    }
};
