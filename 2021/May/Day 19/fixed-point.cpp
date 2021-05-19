// Source :https://leetcode.com/problems/fixed-point/submissions/
class Solution {
public:
    int fixedPoint(vector<int>& arr) {

        int f=1;
        int mins =99999999999;

        for(int i=0;i<size(arr);i++)
        {
            if(i==arr[i])
            {
                f=0;
                mins = arr[i]<mins?arr[i]:mins;
            }
        }

        return f==1?-1:mins;

    }
};
