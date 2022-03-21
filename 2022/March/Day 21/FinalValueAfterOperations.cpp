//source : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/submissions/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x =0;

        for(auto &i:operations)
        {

            if(i.find('+')!=string::npos){x+=1;}
            else{x-=1;}

        }
        return x;
    }
};
