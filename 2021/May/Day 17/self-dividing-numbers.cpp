class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> out;

        for(int i=left;i<right+1;i++)
        {
            if(not isSelfDividing(i))
            {
                out.insert(out.end(),i);
            }
        }
        return out;
    }


    bool isSelfDividing(int num)
    {
        int num2 = num;
        vector<int> digits;
        int f=0;

        while(num2)
        {
            if(num2%10==0)
            {
                return 1;
            }
            if(num2%10!=0)
            {digits.insert(digits.end(),num2%10);}
            num2/=10;
        }


        for (auto& it : digits)
        {

          if(num%it!=0)
          {f=1;}
        }

        return f;
    }


};
