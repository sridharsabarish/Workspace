class Solution
{
public:
    string replaceDigits(string s)
    {

        string n = "";
        char prev='a';
        for(int i =0;i<size(s);i++)
        {
            if(isalpha(s[i]))
            {n+=s[i];}
            if(isdigit(s[i]))
            {
                //cout<<char(int(s[i-1])+int(s[i]-48));
                n+=char(int(s[i-1])+int(s[i]-48));
            }
        }
        return n;
    }
};
