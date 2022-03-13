// Source : https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/submissions/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max =0;
        for(auto &i:sentences)
        {
            if(countWords(i)>max){max=countWords(i);}
        }
        return max;
    }

    int countWords(string s)
    {
      int c=size(s)==0?0:1;
      for(int i=1;i<size(s)-1;i++)
      {
          if(s[i]==' ' && s[i+1]!=' ' && s[i-1]!=' '){c++;}

      }
        return c;
    }
};
