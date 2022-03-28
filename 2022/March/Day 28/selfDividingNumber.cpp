// Source : https://leetcode.com/problems/self-dividing-numbers/submissions/
class Solution {
public:

    bool selfDiv(int i)
    {
        int copy=i;
        int d;

        while(i)
        {
            d = i%10;
            if(d==0){return false;}
            else if(copy%(d)!=0)
            {
                return false;
            }
            i/=10;
        }
        return true;


    }
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> out;
        for(int i=left;i<=right;i++)
        {
            if(selfDiv(i))
            {
                out.insert(out.end(),i);
            }

        }
        return out;
    }
};
