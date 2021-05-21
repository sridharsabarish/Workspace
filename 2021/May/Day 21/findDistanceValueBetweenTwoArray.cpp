// Source : https://leetcode.com/problems/find-the-distance-value-between-two-arrays/submissions/
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int f;
        int count =0;
        for(auto &i:arr1)
        {f=1;
            for(auto &j:arr2)
            {
                if( abs(i-j)<=d)
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                count+=1;
            }
        }
        return count;
    }
};
