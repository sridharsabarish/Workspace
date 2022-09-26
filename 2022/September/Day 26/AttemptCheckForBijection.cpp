/*

Logic :

Store the words from s in a dictionary and recreate a pattern; Check if the pattern matches;

* Need a module to extract individual words from S;
* Need something to extract individual letters from pattern;
* check for bijection;

*/
class Solution {




    public:
    vector<string> extractWord(string s)
    {
        string tmp="";
        vector<string> out;
        for(int i=0;i<size(s);i++)
        {
            if(s[i]==' ')
            {
                if(size(tmp))
                {
                    out.insert(out.end(),tmp);
                    tmp="";
                }

            }
            else
            {
              tmp+=s[i];

            }

        }

        if(size(tmp)!=0)
        {
            out.insert(out.end(),tmp);
        }

        return out;
    }

    vector<char> extractLetter(string p)
    {
        vector<char> out;
        for(auto&i:p)
        {
            out.insert(out.end(),i);
        }
        return out;
    }

    bool checkBijection(vector<char> p,vector<string> o)
    {
        map<char,string> m1;
        map<string,char> m2;

        for(int i=0;i<size(p);i++)
        {
            m1[p[i]]=o[i];
            m2[o[i]]=p[i];
        }

        for(int i=0;i<size(p);i++)
        {
            if(m2[m1[p[i]]]!=m2[o[i]])
            {
                return false;
            }

            if(m1[m2[o[i]]]!=m1[p[i]])
            {
                return false;
            }

        }

        return true;


    }


    bool wordPattern(string pattern, string s) {

        vector<char> p;
        vector<string> o;
        p=extractLetter(pattern);
        o=extractWord(s);
        return checkBijection(p,o);

    }
};
