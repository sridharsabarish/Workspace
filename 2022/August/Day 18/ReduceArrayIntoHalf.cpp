// Source : https://leetcode.com/problems/reduce-array-size-to-the-half/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        std::map<int,int,std::greater<int>> m;

        for(auto&i:arr)
        {
            m[i]+=1;
        }


        vector<int> v;


        int sum=0;
        int count=0;
        int len=size(arr);
        for(auto const& entry: m)
        {
            v.insert(v.end(),entry.second);
        }

         sort(v.begin(), v.end(), greater<int>());

        for(int i=0;i<size(v);i++)
        {

            sum+=v[i];
            if(sum>=len/2)
            {
                return i+1;
            }


        }

        return 1;



    }
};
