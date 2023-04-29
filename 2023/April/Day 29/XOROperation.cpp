// Source : https://leetcode.com/problems/xor-operation-in-an-array/submissions/
class Solution {
public:
    int xorOperation(int n, int start) {
        int prev=0;
        int out=0;
        for(int i=0;i<n;i++)
        {
           int curr= start + 2*i;
           out = prev ^ curr;
           prev=out;
             
        }
        
        return out;
    }
};