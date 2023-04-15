/*

Source : https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/submissions/

12345
power = ?
5*power+4*power-1+3*power-2+....


*/
class Solution {
public:
    
    int getReverse(int n)
    {
    
        //cout<<" N is "<<n<<endl;
        
        
        int copy=n;
        int power=0;
        int out=0;
        while(int(copy/pow(10,power)))
        {
            power+=1;
        }
        //cout<<"Power is "<<power;
        
        while(n)
        {
            out+=(n%10)*(pow(10,power-1));
            power-=1;
            n/=10;
        }
        
        return out;
        
        
    }
    int countDistinctIntegers(vector<int>& nums) {
    vector<int> rev;
    set<int> out;
    for(auto&i:nums)
    {
        out.insert(i);
        out.insert(getReverse(i));
    }
        return size(out);
    }
};