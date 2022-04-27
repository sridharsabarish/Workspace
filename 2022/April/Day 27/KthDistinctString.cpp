// Source : https://leetcode.com/problems/kth-distinct-string-in-an-array/submissions/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        map <int,string> m;
        int counter=1;
        for(auto&i:arr)
        {
            if (std::count(arr.begin(), arr.end(), i)==1)
            {
                m[counter++]=i;

            }

        }

        return m[k];
    }
};
