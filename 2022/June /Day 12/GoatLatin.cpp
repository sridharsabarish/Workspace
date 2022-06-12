// Source : https://leetcode.com/problems/goat-latin/submissions/
class Solution {
public:

    bool isVowel(char c)
    {

        c = tolower(c);
        vector<char> vowels = {'a','e','i','o','u'};
        if(std::find(vowels.begin(),vowels.end(),c)!=vowels.end())
        {
            return true;
        }
        return false;
    }
    string toGoatLatin(string sentence) {

        string temp="";
        vector<string> v;
        for(auto &i:sentence)
        {
            if(i!=' ')
            {
                temp+=i;
            }
            else
            {
                v.insert(v.end(),temp);
                temp="";
            }
        }
        v.insert(v.end(),temp);

        for(int i=0;i<size(v);i++)
        {
            if(isVowel(v[i][0]))
            {
                v[i]+="ma";
            }
            else
            {
                char temp = v[i][0];
                v[i].erase(0,1);
                v[i]+=temp;
                v[i]+="ma";
            }

            for(int j=0;j<i+1;j++)
            {
                v[i]+='a';
            }

        }


        string out = "";
        for(int i=0;i<size(v);i++)
        {
            out+=v[i];
            if(i!=size(v)-1)
            {
                out+=" ";
            }

        }
        return out;


    }
};
