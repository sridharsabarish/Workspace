// Source : https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {


        int f=0;
        int l=size(arr);
        int m=0;
        int mx = *max_element(arr.begin(),arr.end());
        while(f<=l)
        {
            m = (f+l)/2;
            if(arr[m]==mx)
            {
                return m;
            }

            else if(arr[m-1]<arr[m+1])
            {
                f=m;
            }

            else
            {
                l=m;
            }

        }
        return -1;
    }
};
