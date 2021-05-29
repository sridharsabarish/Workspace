// Source : https://leetcode.com/problems/mean-of-array-after-removing-some-elements/submissions/
class Solution {
public:
    double trimMean(vector<int>& arr) {

        int n=size(arr);
        sort(arr.begin(),arr.end());
        int d=floor(0.05*n);
        double sum =0;
        int count =0;

        for(int i=d;i<n-d;i++)
        {
            sum+=arr[i];
            count+=1;
        }
        return sum/count;
    }
};
