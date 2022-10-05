//source:https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int out=0;
        for(auto&i:operations)
        {
            if(std::find(i.begin(),i.end(),'+')!=i.end())
            {
                out+=1;
            }
            else
            {
                out-=1;
            }

        }
        return out;
    }
};
