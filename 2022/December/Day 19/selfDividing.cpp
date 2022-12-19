// Source : https://leetcode.com/problems/self-dividing-numbers/
class Solution {
public:

    bool isSelfDividing(int num)
    {
        int copy=num;
        int dig;
        while(copy)

        {
            dig = copy%10;
            if(dig==0){return false;}
            if(num%dig!=0){return false;}
            copy/=10;
        }
        return true;


    }


    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> sD;


        for(int i=left;i<=right;i++)
        {
            if(isSelfDividing(i))
            {
                sD.insert(sD.end(),i);
            }
        }
        return sD;
    }
};
