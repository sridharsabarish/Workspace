// Source : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m;
        for(int i=0;i<size(arr)-1;i++)
        {

            m = arr[i+1];
            for(int j=i+1;j<size(arr);j++)
            {
                m= m<arr[j]?arr[j]:m;
            }
            arr[i]=m;
        }
        arr[size(arr)-1]=-1;
        return arr;
    }
};
