// Source : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/submissions/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int max =-1;
        int temp=max;
        for(int i=size(arr)-1;i>=0;i--)
    {
        if(arr[i]>max){max=arr[i];}
        arr[i]=temp;
        temp = max;

    }
        return arr;
    }
};