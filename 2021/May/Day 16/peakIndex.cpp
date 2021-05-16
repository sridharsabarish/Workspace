class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int max = -1;
        int index =-1;

        for(int i=0;i<size(arr);i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
                index =i;

            }
        }

        return index;
    }

};
