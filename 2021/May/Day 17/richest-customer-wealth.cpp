class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum,max = 0;
        for(auto &l : accounts)
        {
            sum=0;
            for(auto &i :l)
            {
                sum+=i;
            }
            if(sum>max)
            {
                max = sum;
            }

        }
        return max;

    }
};
