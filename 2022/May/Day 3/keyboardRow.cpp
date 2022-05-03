// Source : https://leetcode.com/problems/keyboard-row/submissions/
class Solution {
public:


    int finds(char c,vector<string> rows)
    {
        c = tolower(c);

        for(int i=0;i<size(rows);i++)
        {
            if(std::find(rows[i].begin(),rows[i].end(),c)!=rows[i].end())
            {
                return i;
            }
        }
        return -1;
    }

    vector<string> findWords(vector<string>& words) {

        vector<string> out;

        vector<string> rows = {"qwertyuiop","asdfghjkl","zxcvbnm"};


        for(auto&i:words)
        {
            int r=-1;
            int f=0;
            for(auto&j:i)
            {
                if(r==-1)
                {
                    r=finds(j,rows);
                }
                else
                {
                    if(r!=finds(j,rows))
                    {
                        f=1;
                        break;
                    }
                }

            }
            if(f==0)
            {
                out.insert(out.end(),i);
            }

        }
        return out;

    }
};
