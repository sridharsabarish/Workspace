//Source : https://leetcode.com/problems/count-of-matches-in-tournament/submissions/
class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        int carry =0;
        while(n>1)
        {
            carry=0;
            match+=n/2;
            if(n%2!=0){carry+=1;}
            if(n==1){return match;}
            n/=2;
            n+=carry;
        }
        return match;
    }
};
