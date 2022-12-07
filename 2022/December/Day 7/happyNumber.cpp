// Source : https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {

        vector<int> visited;
        int sum=0;
        while(true)
        {
            sum=0;
        while(n)
        {
            sum+=pow(n%10,2);
            n/=10;
        }

            if(sum==1)
            {
                return true;
            }

            else
            {
                if(std::find(visited.begin(),visited.end(),sum)!=visited.end())
                    {return false;}

                visited.insert(visited.end(),sum);

            }
            n=sum;

        }
        return false;

    }
};
