// Source : https://leetcode.com/problems/arranging-coins/submissions/
class Solution {
public:
    int arrangeCoins(int n) {

      int row =0;
      int bal = n;
      while(bal>=row+1)
      {
          bal-=row+1;
          row+=1;
      }
        return row;

    }
};
