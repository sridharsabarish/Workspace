// Source :https://leetcode.com/problems/counting-elements/submissions/
class Solution {
public:
    int countElements(vector<int>& arr) {
        int l = size(arr);
        int count =0;
        for(int i=0;i<l;i++)
        {
            if (std::find(std::begin(arr), std::end(arr), arr[i]+1) != std::end(arr))
            {
                count+=1;
            }
        }
        return count;
    }
};
