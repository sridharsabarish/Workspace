// Source : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/submissions/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int var=0;
        
        for(auto&i:operations)
            if((i=="X++")||(i=="++X"))var+=1;
            else var-=1;
        return var;
    }
};