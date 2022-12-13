// Source : https://leetcode.com/problems/replace-all-digits-with-characters/submissions/
class Solution {
public:
    string replaceDigits(string s) {

        for(int i=0;i<size(s);i++)
        {
            if(isdigit(s[i]))
            {
                s[i]=char(int(s[i])-48+int(s[i-1]));
                //cout<<"s[i-1] :"<<int(s[i-1])<<"s[i] : "<<int(s[i])<<"changed : "<<char(int(s[i])-48+int(s[i-1]))<<endl;
            }
        }
        return s;


    }
};
