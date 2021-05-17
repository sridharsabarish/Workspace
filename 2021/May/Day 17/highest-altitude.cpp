class Solution {
public:

    int largestAltitude(vector<int>& gain) {
        int maximum = 0;

        int sum = 0;
        for (auto & i:gain)
            {

            sum = sum+i;
            if(sum>maximum)
            {
                maximum = sum;
            }

        }
     return maximum;
    }
};
