// Source : https://leetcode.com/problems/sorting-the-sentence/submissions/
class Solution {
public:
    string sortSentence(string s) {
        map<int,string> m;

        string temp="";
        for(auto&i:s)
        {
            if(isalpha(i))
            {
                temp+=i;
            }
            if(isdigit(i))
            {
                m[int(i)-48]=temp;
                temp ="";
            }
        }
        temp="";
        for(int i=1;i<=size(m);i++)
        {
            temp+=m[i];
            if(i!=size(m)){temp+=" ";}

        }
        return temp;
    }
};
