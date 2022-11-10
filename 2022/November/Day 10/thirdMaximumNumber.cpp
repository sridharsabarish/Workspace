// Source : https://leetcode.com/problems/third-maximum-number/submissions/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int DEBUG=0;
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> out;

        for(auto&i:nums)
        {
            if(std::find(out.begin(),out.end(),i)==out.end())
            {
                out.insert(out.end(),i);
            }

        }
        if(DEBUG)
        {
            cout<<size(out);
            cout<<"Elements are";
            for(auto&i:out)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
            if(size(out)<3)
        {
            return out[0];

        }
        else
        {
            return out[2];

        }



    }
};
