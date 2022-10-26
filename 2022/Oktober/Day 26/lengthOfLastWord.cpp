// Source : https://leetcode.com/problems/length-of-last-word/submissions/
class Solution {
public:
    int lengthOfLastWord(string s) {

    string temp="";
    for(int i=size(s);i>=0;i--)
    {
        if(isalpha(s[i]))
        {
            temp+=s[i];

        }
        else
        {
            if(temp!="")
            {

                return size(temp);
            }

        }


    }
        return size(temp);
    }
};



// Alt Solution
// Source : https://leetcode.com/problems/length-of-last-word/submissions/
class Solution {
public:
    int lengthOfLastWord(string s)
    {
      reverse(s.begin(),s.end());
      short count=0;
      for(int i=0;i<size(s);i++)
      {
          if(s[i]==' ' && count!=0)
          {
              return count;
          }
          else if (isalpha(s[i]))
          {
              count++;
          }

      }
        return count;
    }
};
