
// Source : https://leetcode.com/problems/valid-parentheses/submissions/
class Solution {
public:
    bool isValid(string s) {
        vector<char> v;

        for(auto&i:s)
        {



            switch(i)
            {
                    case '}':

                    if(size(v)==0){return false;}
                    if(v[size(v)-1]!='{')
                    {
                        return false;
                    }
                    v.pop_back();
                    break;
                case ']':
                     if(size(v)==0){return false;}
                    if(v[size(v)-1]!='[')
                    {
                        //cout<<"Return 2";
                        return false;
                    }
                    v.pop_back();
                    break;
                case ')':
                     if(size(v)==0){return false;}
                    if(v[size(v)-1]!='(')
                    {
                        //cout<<"Return 3";
                        return false;
                    }

                v.pop_back();
                    break;

                default:
                    v.insert(v.end(),i);


            }

        }



        if(size(v)!=0){return false;}
        return true;
    }
};
