// Source : https://leetcode.com/problems/divisor-game/
public:
    bool divisorGame(int n) {
        int count=0;
        while(n>1)
        {
            if(n%2==0)
            {
                n-=1;
                count++;
                continue;
            }
                for(int i=n-1;i>0;i--)
                {

                    if(n%i==0)
                    {
                        n-=i;
                        count++;
                        break;
                    }
                }
        }
        return count%2?true:false;
    }
};
