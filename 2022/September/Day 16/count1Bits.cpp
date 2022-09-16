// Source : https://leetcode.com/problems/number-of-1-bits/submissions/
// Need to understand how it works as i used Quora for reference.
/*

Logic : We do a bitwise and which gives us 1 if we have one; Then we do a right shift.
As we do this, we will eventually add the number of ones to the total count;


*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
       unsigned int count = 0;
        while(n)
      {
        count += n & 1;  // What is happening here? Maybe we
        n >>= 1; // Right shift
      }
      return count;
    }
};
