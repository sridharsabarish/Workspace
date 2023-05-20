// Source : https://leetcode.com/problems/decode-xored-array/submissions/
// To note : Inverse of an XOR is an XOR.


class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> out;
        out.insert(out.end(),first);
        for(auto &i:encoded)
        {
           out.insert(out.end(),i^first);
           first=i^first;
        }
        return out;
    }
};