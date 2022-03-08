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
         double f=0;
         double l =n;
         double mid = (f+l)/2;
         while(guess(mid)!=0)
         {

             if(guess(mid)==-1)
             {
                 l=mid-1;
             }
             else if(guess(mid)==1)
             {
                 f=mid+1;
             }

             mid = (f+l)/2;

         }
        return int(mid);

    }
};
