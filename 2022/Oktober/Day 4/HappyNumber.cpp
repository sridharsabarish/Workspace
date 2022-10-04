// Source : https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {

        vector<int> v;

        while(true)
        {
            int sum=0;
            while(n)
            {
                sum+=(n%10)*(n%10);
                n/=10;
            }

            if(sum==1){return true;}
            else
            {
                if(std::find(v.begin(),v.end(),sum)!=v.end()){return false;}
                v.insert(v.end(),sum);
            }
            n=sum;

        }

        return false;


    }
};
