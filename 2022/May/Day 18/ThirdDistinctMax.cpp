// Source : https://leetcode.com/problems/third-maximum-number/submissions/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;

    for (int x : nums) {

        s.insert(x);
    }
        int max[3];
       max[0]=*std::min_element(nums.begin(),nums.end());
       max[1]=max[0];
       max[2]=max[0];

        for(auto &i:s)
        {
            if(i>max[0])
            {
                max[2]=max[1];
                max[1]=max[0];
                max[0]=i;
            }
            else if(i>max[1])
            {
                max[2]=max[1];
                max[1] =i;

            }
            else if(i>max[2])
            {
                max[2]=i;
            }


        }

        int sz = size(s);
        if(sz<=2){return max[0];}
        return max[2];


    }
};
