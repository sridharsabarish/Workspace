// Source : https://leetcode.com/problems/defanging-an-ip-address/submissions/
class Solution {
public:
    string defangIPaddr(string address) {
        string out="";
        for(auto&i:address)
        {
            if(i!='.')
            {
                out+=i;
            }
            else
            {
                out+="[.]";
            }
        }
        return out;
    }
};