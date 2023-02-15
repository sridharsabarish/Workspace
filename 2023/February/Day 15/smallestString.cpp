// Source : https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/submissions/
class Solution {
public:
    string getSmallestString(int n, int k) {
     
    string out="";
    n--;
    while(k)
    {int val= k-n>26?26:k-n;
    k-=val;
    out+=char(96+val);
    n--;
    }
        reverse(out.begin(),out.end());
        return out;
        
    }
};