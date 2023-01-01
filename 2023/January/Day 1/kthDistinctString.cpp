// Source : https://leetcode.com/problems/kth-distinct-string-in-an-array/submissions/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int s=0;
        string temp="";
        
        for(auto&i:arr)
        {
            if(std::count(arr.begin(),arr.end(),i)==1)
            {
                temp=i;
                s++;
                if(s==k){return temp;}
                
            }
        }
        return "";
    }
};