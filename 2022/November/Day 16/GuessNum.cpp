// Source : https://leetcode.com/problems/guess-number-higher-or-lower/submissions/
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int f=1;
        int l=n;

        int m;
        while(f<l)
        {   m=(f/2)+(l/2);
            if(guess(m)<0)
            {
                l=m-1;
            }

            else if(guess(m)>0)
            {
                f=m+1;
            }

           else
           {
               return m;
           }

        }
        return f;
    }
};
