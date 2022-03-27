// Source : https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {

        vector<int> v;
        int sum=0;
        while(true)
        {

            sum =0;

        while(n)
        {

           sum+=(n%10)*(n%10);
           n/=10;
        }

         if(std::find(v.begin(),v.end(),sum)!=v.end())
            {
                return false;
            }
        //cout<<sum<<" ";
            if(sum==1){return true;}
            v.insert(v.end(),sum);
        n=sum;
        }



    }
};
