// Source : https://leetcode.com/problems/find-pivot-index/submissions/
class Solution {
public:

    int calcSum(vector<int> &v)
    {
        int sum=0;
        for(auto&i:v){sum+=i;}
        return sum;

    }

    int pivotIndex(vector<int>& nums) {



        for(int i=0;i<size(nums);i++)
        {
            std::vector<int> v1(nums. begin(), nums.begin()+i);
            std::vector<int> v2(nums. begin()+i+1, nums.end());
            if(calcSum(v1)==calcSum(v2)){return i;}
        }
        return -1;


    }
};
