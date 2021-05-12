// Source :https://leetcode.com/problems/single-row-keyboard/submissions/
class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int sums =0;
        int previous =0;
        for (int i=0;i<size(word);i++)
        {
          for(int j=0;j<size(keyboard);j++)
          {
              if(keyboard[j]==word[i])
              {
                  sums+= abs(j-previous);
                  previous =j;
                  break;
              }

          }
        }
        return sums;
    }
};
